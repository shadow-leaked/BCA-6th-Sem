# 📡 Practical 8: Bluetooth-Based Device Control with LCD Feedback using Arduino UNO R3

> Control electronic devices wirelessly using a mobile app, Bluetooth module (HC-05), and Arduino UNO R4. The system receives commands via Bluetooth, toggles a device (LED/Relay), and displays live status on an LCD screen.

---

## 🧰 Components Required

| Component                | Quantity | Purpose                                                  |
|--------------------------|----------|-----------------------------------------------------------|
| Arduino UNO R3           | 1        | Microcontroller platform                                 |
| HC-05 Bluetooth Module   | 1        | Wireless serial communication                            |
| 16x2 LCD Display         | 1        | Displays incoming command/status                         |
| 10kΩ Potentiometer       | 1        | Adjust LCD contrast                                      |
| LED or Relay Module      | 1        | Output device (visual indicator or appliance controller) |
| 220Ω Resistor            | 1        | Current limiting for LED (skip if using relay)           |
| 1kΩ + 2kΩ Resistors      | 1 each   | Voltage divider for HC-05 RX pin                         |
| Jumper Wires             | Several  | For interconnections                                     |
| Breadboard               | 1        | Prototyping platform                                     |
| Android Smartphone       | 1        | To send Bluetooth commands                               |

---

## 🔌 Circuit Connections

### 🔵 HC-05 Bluetooth Module

| HC-05 Pin | Arduino Pin        | Details                                 |
|-----------|--------------------|-----------------------------------------|
| VCC       | 5V                 | Power supply                            |
| GND       | GND                | Common ground                           |
| TXD       | D9                 | RX for Arduino (read data)              |
| RXD       | D8 via voltage divider | TX from Arduino (write via 3.3V)    |

> Use a voltage divider with 1kΩ + 2kΩ to reduce 5V TX to 3.3V safe for HC-05 RX.

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

### 🔴 Output Device (LED or Relay)

| Device Pin | Arduino Pin | Notes                                          |
|------------|-------------|------------------------------------------------|
| IN (Relay) / Anode (LED) | D7          | Signal pin to activate output          |
| GND        | GND         | Common ground                                 |
| VCC (Relay only) | 5V     | Power for opto-isolated relay module (if used)|

---

## 📲 Mobile App Configuration

1. Install **Serial Bluetooth Terminal** (free) from Google Play Store.
2. Pair your HC-05 with your phone. Default pairing code is `1234` or `0000`.
3. Open the app and connect to the HC-05.
4. Set line ending to **None** to avoid extra characters.
5. Send:
   - `"1"` → Turns ON LED/Relay
   - `"0"` → Turns OFF LED/Relay

---

## 🧠 How It Works

- The Arduino listens for serial input over Bluetooth.
- When a valid command (`"1"` or `"0"`) is received, it:
  - Toggles the connected device (LED or Relay).
  - Displays the command/status on the LCD.
- This creates a basic **wireless home automation** or **IoT device controller**.

---

## 🧪 Learning Objectives

- Understand Bluetooth serial communication (HC-05).
- Parse and handle data over `SoftwareSerial`.
- Drive an external output (LED/Relay) using Arduino logic.
- Display dynamic data on LCD using the `LiquidCrystal` library.
- Interface sensors and actuators to build real-time IoT solutions.

---

## 🛡️ Safety Tips (for Relay Users)

- Use **opto-isolated relays** when switching AC.
- Ensure **no direct human contact** with high-voltage circuits.
- Keep Arduino (low voltage) side isolated from AC (high voltage) side.

---

## ✅ Board Compatibility

| Arduino Board   | Status     |
|------------------|------------|
| UNO R3           | ✅ Tested  |
| UNO R4           | ✅ Fully compatible (Renesas) |
| Nano             | ✅ Compatible |
| Mega 2560        | ✅ Compatible |

---


## © License
This project is licensed under the **MIT License**.  
Maintained with ❤️ by **Aditya Sharma/ Drone Electronics**
