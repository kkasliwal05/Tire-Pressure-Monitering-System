#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// LCD setup
LiquidCrystal_I2C lcd(0x27, 16, 2);

// Define HX710B pins (use valid ESP8266 digital pins)
const int DT_pin = D2;    // Data pin from HX710B
const int SCK_pin = D3;   // Clock pin for HX710B

void setup() {
  lcd.init();
  lcd.backlight();
  Serial.begin(9600);

  pinMode(DT_pin, INPUT);
  pinMode(SCK_pin, OUTPUT);

  digitalWrite(SCK_pin, HIGH);
  delay(100);
}

long readHX710B() {
  long count = 0;

  // Wait until DT goes LOW
  while (digitalRead(DT_pin));

  // Read 24 bits
  for (int i = 0; i < 24; i++) {
    digitalWrite(SCK_pin, HIGH);
    delayMicroseconds(1);
    count = count << 1;
    digitalWrite(SCK_pin, LOW);
    delayMicroseconds(1);
    if (digitalRead(DT_pin)) {
      count++;
    }
  }

  // 25th pulse
  digitalWrite(SCK_pin, HIGH);
  delayMicroseconds(1);
  digitalWrite(SCK_pin, LOW);
  delayMicroseconds(1);

  // Convert to signed 24-bit
  if (count & 0x800000) {
    count |= ~0xFFFFFF;
  }

  return count;
}

void loop() {
  long pressure = readHX710B();

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Pressure:");

  lcd.setCursor(0, 1);
  lcd.print(pressure);
  lcd.print(" units");  // You can calibrate later

  Serial.print("Pressure: ");
  Serial.println(pressure);

  delay(1000);
}
