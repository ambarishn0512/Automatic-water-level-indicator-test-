# Automatic Water Level Indicator using Arduino

An Automatic Water Level Indicator system detects and displays the level of water in a tank using sensors and notifies users via LED indicators and a buzzer. This project helps avoid water wastage, monitor usage, and prevent motor damage caused by overflow or dry runs.


 📘 Project Overview

This project uses an **Arduino microcontroller** and **water level sensing probes** to detect water levels in a tank. Depending on the water level detected, corresponding **LEDs light up**, and a **buzzer sounds** if the tank is full. This system is cost-effective and easy to install for household or agricultural water tanks.



 🔧 Components Used

| Component               | Quantity |
|-------------------------|----------|
| Arduino UNO/Nano        | 1        |
| Water Level Sensors (or wires/probes) | 4–5 |
| LEDs (Red, Yellow, Green) | 3–5      |
| Buzzer                  | 1        |
| Resistors (220Ω)        | 3–5      |
| Jumper Wires            | As needed |
| Breadboard or PCB       | 1        |
| Power Supply (5V)       | 1        |



 ⚙️ Working Principle

- Multiple sensors/probes are placed at different water levels inside a tank (e.g., Low, Medium, High, Full).
- As water rises and touches a sensor, the circuit completes and sends a signal to the Arduino.
- Arduino lights up LEDs to represent the level reached.
- When the tank is full, the buzzer is activated to notify the user.
- The system resets when water level drops.



 🧠 Block Diagram
<img width="506" height="428" alt="image" src="https://github.com/user-attachments/assets/692b5421-0f39-4d90-873d-6315c3292b40" />


> *(Replace this with a Fritzing diagram or real image in your repo if available)*

 🖥️ Arduino Sketch

The main Arduino code is located at:
water_level_indicator/water_level_indicator.ino


 💡 Output

- LED 1 ON → Low Water Level  
- LED 2 ON → Medium Level  
- LED 3 ON → High Level  
- LED 4 + Buzzer ON → Full Tank Alert

 ✅ Advantages

- Prevents tank overflow
- Helps conserve water
- Prevents motor dry run damage
- Low cost and easy to implement

 🚀 Future Improvements

- Automatic motor ON/OFF control
- Display water level on LCD/IoT dashboard
- SMS or mobile app alerts using GSM/ESP modules
- Solar-powered version for remote areas

 📍 Applications

- Overhead water tanks in homes
- Agricultural water systems
- Industrial water storage
- Apartment buildings and hostels

👨‍💻 Contributors

- Ambarish N – Developer & Documentation  


 📄 License

This project is licensed under the MIT License.  
You are free to use, modify, and distribute it.

 📷 Media


<img width="244" height="285" alt="image" src="https://github.com/user-attachments/assets/d106094d-dc7f-439f-804a-45d4d42736b4" />
<img width="250" height="269" alt="image" src="https://github.com/user-attachments/assets/5654eac6-5782-4b2f-851a-340e0e73cf0d" />
<img width="204" height="275" alt="image" src="https://github.com/user-attachments/assets/22bcedfc-9271-4103-81ce-88417cdd2706" />



