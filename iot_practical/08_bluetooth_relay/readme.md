# 📡 Practical 8: Bluetooth-Based Device Control with LCD Feedback using Arduino UNO R3

Create a smart wireless device controller using **Arduino**, **Bluetooth (HC-05)**, and a **16x2 LCD** to receive commands from your mobile phone and toggle an output device like an **LED** or **Relay Module**. This practical demonstrates basic home automation with real-time feedback.

---

## 🧰 Components Required

| Component              | Quantity | Purpose                                              |
|------------------------|----------|------------------------------------------------------|
| Arduino UNO R3         | 1        | Microcontroller platform                             |
| HC-05 Bluetooth Module | 1        | Wireless serial communication                        |
| 16x2 LCD Display       | 1        | Visual display for commands/status                  |
| 10kΩ Potentiometer     | 1        | LCD contrast adjustment                              |
| LED or Relay Module    | 1        | Output device (indicator or appliance switch)        |
| 220Ω Resistor (LED)    | 1        | Current limiting for LED                             |
| 1kΩ + 2kΩ Resistors    | 1 each   | Voltage divider for HC-05 RX protection              |
| Jumper Wires           | Several  | For interconnections                                 |
| Breadboard             | 1        | Circuit prototyping                                  |
| Android Smartphone     | 1        | To send Bluetooth commands                           |

---

## 🔌 Circuit Connections

### 🔵 HC-05 Bluetooth Module

| HC-05 Pin | Arduino Pin       | Description                                |
|-----------|-------------------|--------------------------------------------|
| VCC       | 5V                | Power supply                               |
| GND       | GND               | Common ground                              |
| TXD       | D9 (Arduino RX)   | Receives serial data from HC-05            |
| RXD       | D8 (via voltage divider) | Arduino TX → HC-05 RX (use 3.3V divider) |

> ⚠️ Use a voltage divider (1kΩ + 2kΩ) between Arduino TX and HC-05 RX to step down from 5V to ~3.3V.

---

### 🟢 LCD Display (16x2)

| LCD Pin | Arduino Pin | Description               |
|---------|-------------|---------------------------|
| RS      | D12         | Register Select           |
| E       | D11         | Enable                    |
| D4      | D5          | Data 4                    |
| D5      | D4          | Data 5                    |
| D6      | D3          | Data 6                    |
| D7      | D2          | Data 7                    |
| VSS     | GND         | Ground                    |
| VDD     | 5V          | Power supply              |
| V0      | Pot center  | Contrast via potentiometer|
| A       | 5V          | LCD backlight (+)         |
| K       | GND         | LCD backlight (–)         |

> 🎛️ Connect the outer terminals of the potentiometer to 5V and GND, center pin to LCD V0.

---

### 🔴 Output Device (LED or Relay)

#### For LED:

| LED Pin        | Arduino Pin      | Notes                              |
|----------------|------------------|------------------------------------|
| Anode (+)      | 5v via 220Ω      | Connect 5V through 220Ω resistor   |
| Cathode (–)    | GND              | Ground                             |

#### For Relay Module (optically isolated):

| Relay Pin | Arduino Pin | Description                          |
|-----------|-------------|--------------------------------------|
| IN        | D7          | Trigger pin from Arduino             |
| VCC       | 5V          | Power the relay module               |
| GND       | GND         | Common ground with Arduino           |

> 💡 Choose either LED or Relay depending on your output requirement. Don’t connect both to D7 at once.

---

## 📲 Mobile App Configuration

1. Install: [**Serial Bluetooth Terminal**](https://play.google.com/store/apps/details?id=de.kai_morich.serial_bluetooth_terminal)
2. Pair with **HC-05** (default password: `1234` or `0000`)
3. Set "Line Ending" to **None** in app settings
4. Send the following commands:
   - `"1"` → Turns **ON** the device (LED/Relay)
   - `"0"` → Turns **OFF** the device (LED/Relay)

---

## 🧠 How It Works

- Arduino listens for incoming serial commands from your smartphone via HC-05.
- Valid commands (`1`, `0`) are parsed:
  - `"1"`: Turns ON output device.
  - `"0"`: Turns OFF output device.
- Received data is shown in real-time on the LCD screen for user feedback.

---

## 🧪 Learning Objectives

- Understand and implement **Bluetooth serial communication**.
- Interface and control **actuators (LED/Relay)** via digital pins.
- Display real-time feedback using **LCD**.
- Learn use of **voltage dividers** to protect 3.3V modules.
- Build foundational knowledge for **IoT-based home automation**.

---

## 🛡️ Safety Tips (for Relay Users)

- Always use **opto-isolated** relay modules when switching **AC appliances**.
- Do **not touch** high-voltage circuits while powered.
- Keep **Arduino and AC circuits electrically isolated**.

---

## ✅ Board Compatibility

| Arduino Board   | Status                                |
|------------------|----------------------------------------|
| UNO R3           | ✅ Fully tested and supported           |
| UNO R4 (Renesas) | ✅ Compatible (use SoftwareSerial)      |
| Nano             | ✅ Works fine with same wiring          |
| Mega 2560        | ✅ Compatible (use different Serial pins) |

---

## © License

This project is licensed under the **MIT License**.  
Maintained with ❤️ by **Aditya Sharma / Drone Electronics**
