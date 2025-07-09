
                                          𝐓𝐢𝐫𝐞 𝐏𝐫𝐞𝐬𝐬𝐮𝐫𝐞 𝐌𝐨𝐧𝐢𝐭𝐨𝐫𝐢𝐧𝐠 𝐒𝐲𝐬𝐭𝐞𝐦
                                          
A mini-project designed to monitor air pressure in two-wheeler tires using pressure sensors and Arduino. 
The system detects abnormal tire pressure levels and triggers alerts to ensure vehicle safety. 
Simulations were performed in Proteus to validate functionality before hardware deployment.

    📌 𝑷𝒓𝒐𝒃𝒍𝒆𝒎 𝑺𝒕𝒂𝒕𝒆𝒎𝒆𝒏𝒕
Tire pressure plays a crucial role in vehicle safety and fuel efficiency. 
Many accidents are caused due to unnoticed low tire pressure. 
This project aims to develop a low-cost system to continuously monitor tire air pressure and alert the rider when it drops below a safe threshold.

   ✅ 𝗦𝗼𝗹𝘂𝘁𝗶𝗼𝗻 𝗢𝘃𝗲𝗿𝘃𝗶𝗲𝘄
The system uses a pressure sensor connected to an microcontroller to measure real-time tire pressure. 
If the pressure falls below the predefined safe limit, the system activates an alert signal (LCD). 
The entire setup was first simulated in Proteus software to verify the logic and circuit design.

   💻 𝗧𝗲𝗰𝗵 𝗦𝘁𝗮𝗰𝗸
Hardware: ESP 8266, Pressure Sensor, LCD
Software: Arduino IDE, Proteus Design Suite
Programming Language: Embedded C
Tools: Proteus Simulation, VS Code

   ⚙️ 𝗙𝗲𝗮𝘁𝘂𝗿𝗲𝘀
Real-time tire pressure monitoring.
Alerts user if pressure drops below threshold.
Low-cost and easy to implement for two-wheelers.
Simulated and tested for accuracy in Proteus.

   🔥 𝗛𝗼𝘄 𝗜𝘁 𝗪𝗼𝗿𝗸𝘀
The pressure sensor reads air pressure inside the tire.
Arduino processes the sensor data and compares it to a safe limit.
If pressure < safe limit → LCD alert is activated.
System keeps monitoring continuously in a loop.

  ✨ 𝗙𝘂𝘁𝘂𝗿𝗲 𝗜𝗺𝗽𝗿𝗼𝘃𝗲𝗺𝗲𝗻𝘁𝘀
Display real-time pressure readings on an LCD screen.
Add Bluetooth module to send alerts to a mobile app.
Extend system for four-wheeler vehicles
