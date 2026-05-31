# 🚦 Smart Traffic Light with Pedestrian Crossing

A Smart Traffic Light System built using ESP32 and simulated in Wokwi. The project controls traffic flow using Red, Yellow, and Green LEDs and includes a pedestrian crossing button for safe road crossing.

## 📌 Features

- Automatic traffic light sequence
- Pedestrian crossing button support
- Red, Yellow, and Green signal control
- Serial Monitor status messages
- ESP32-based implementation
- Wokwi simulation

## 🛠 Components Used

- ESP32 DevKit V1
- Red LED
- Yellow LED
- Green LED
- Push Button
- 220Ω Resistors

## 🔌 Pin Connections

| Component | ESP32 Pin |
|-----------|-----------|
| Red LED | GPIO 23 |
| Yellow LED | GPIO 22 |
| Green LED | GPIO 21 |
| Push Button | GPIO 19 |

## 💡 Working

1. Green signal turns ON.
2. The system continuously checks for pedestrian button input.
3. When the button is pressed:
   - Green signal turns OFF
   - Yellow signal turns ON for 2 seconds
   - Red signal turns ON for 5 seconds
   - Pedestrians can safely cross the road
4. The system returns to normal traffic operation.

## 🎯 Concepts Learned

- GPIO Interfacing
- Digital Input/Output
- Embedded C++
- ESP32 Programming
- Traffic Signal Control Logic
- Wokwi Simulation

## 📷 Project Screenshot

Add your project screenshot here.

## 🚀 Future Improvements

- Countdown timer display
- Buzzer for pedestrian alerts
- IoT-based traffic monitoring
- Emergency vehicle priority system

## 👨‍💻 Author

Rakhi Tiwari
ECE Student
