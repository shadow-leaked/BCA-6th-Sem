# 📡 Practical 7: Bluetooth Data Reception with LCD Display using Arduino UNO R3

> This practical demonstrates how to receive data from a Bluetooth-enabled mobile device, process the data, and display it on a 16x2 LCD screen using Arduino. The Bluetooth module (HC-05) communicates with the Arduino and sends real-time data that gets shown on the LCD.

---

## 🧰 Components Required

| Component                | Quantity | Purpose                                                  |
|--------------------------|----------|-----------------------------------------------------------|
| Arduino UNO R3           | 1        | Microcontroller platform                                 |
| HC-05 Bluetooth Module   | 1        | Wireless serial communication                            |
| 16x2 LCD Display         | 1        | Displays received Bluetooth data                         |
| 10kΩ Potentiometer       | 1        | Adjust LCD contrast                                      |
| Jumper Wires             | Several  | For interconnections                                     |
| Breadboard               | 1        | Prototyping platform                                     |
| Android Smartphone       | 1        | To send Bluetooth data (text)                            |

---

## 🔌 Circuit Connections

### 🔵 HC-05 Bluetooth Module

| HC-05 Pin | Arduino Pin        | Details                                 |
|-----------|--------------------|-----------------------------------------|
| VCC       | 5V                 | Power supply                            |
| GND       | GND                | Common ground                           |
| TXD       | D9                 | RX for Arduino (read data)              |
| RXD       | D8                 | TX from Arduino (write data)            |

> No voltage divider needed as RX pin of HC-05 operates safely at 3.3V for Arduino's 5V TX.

---

### 🟢 LCD Display (16x2)

| LCD Pin | Arduino Pin        | Description                  |
|---------|--------------------|------------------------------|
| RS      | D12                | Register Select              |
| E       | D11                | Enable                       |
| D4      | D5                 | Data 4                       |
| D5      | D4                 | Data 5                       |
| D6      | D3                 | Data 6                       |
| D7      | D2                 | Data 7                       |
| VSS     | GND                | Ground                       |
| VDD     | 5V                 | Power                        |
| V0      | Potentiometer Mid  | LCD contrast adjustment      |
| A       | 5V                 | LCD backlight (optional)     |
| K       | GND                | LCD backlight (optional)     |

---

## 📲 Mobile App Configuration

1. Install **Serial Bluetooth Terminal** (free) from Google Play Store.
2. Pair your HC-05 with your phone. Default pairing code is `1234` or `0000`.
3. Open the app and connect to the HC-05.
4. Send any text string, e.g., "Hello, World!" from the app to Arduino over Bluetooth.
5. The received data will be displayed on the LCD in real time.

---

## 🧠 How It Works

- **Bluetooth Communication**: The Arduino uses the `SoftwareSerial` library to establish communication with the HC-05 Bluetooth module.
- **LCD Display**: The `LiquidCrystal` library is used to control the 16x2 LCD. The data received from the Bluetooth module is displayed on the screen.
- **Data Filtering**: Only printable ASCII characters (32-126) are captured and shown on the LCD. This ensures any unwanted characters or noise are excluded.
  
Once the Bluetooth module receives a string from the mobile app, it is shown on the LCD display. You can send any textual message to the Arduino via Bluetooth, and it will be immediately visible on the screen.

---

## 🧪 Learning Objectives

- Understand Bluetooth communication using the HC-05 module and Arduino.
- Learn to receive and process data from mobile apps over Bluetooth.
- Display dynamic data on a 16x2 LCD using the `LiquidCrystal` library.
- Filter and clean input data to ensure it meets expected criteria for display.
- Develop basic IoT applications by interfacing Bluetooth with microcontrollers.

---

## 🧩 Troubleshooting

1. **No data displayed**: 
   - Ensure HC-05 is properly paired with the mobile app.
   - Check if the baud rate is correctly set to `9600` on both the HC-05 and Arduino.

2. **Unreadable characters on LCD**:
   - Verify the wiring for the LCD and ensure the contrast potentiometer is adjusted correctly.
   - Double-check that only printable ASCII characters are being sent from the mobile app.

---

## ✅ Board Compatibility

| Arduino Board   | Status     |
|------------------|------------|
| UNO R3           | ✅ Tested  |
| UNO R4           | ✅ Fully compatible (Renesas) |
| Nano             | ✅ Compatible |
| Mega 2560        | ✅ Compatible |

---

## 🛠️ Libraries Used

- **LiquidCrystal**: Manages 16x2 LCD display communication.
- **SoftwareSerial**: Enables serial communication with Bluetooth over non-hardware serial pins.

---

## 🧑‍💻 Contributing

Contributions and forks are welcome!  
Please submit **issues** or **feature requests** through the **Issues** tab.

---

## © License
This project is licensed under the **MIT License**.  
Maintained with ❤️ by **Aditya Sharma/ Drone Electronics**
