# 🌡️ Practical 4: Interfacing DHT22 Sensor – Temperature & Humidity Display on Serial Monitor

> This practical introduces the use of a **temperature and humidity sensor (DHT22)** with Arduino. The output is displayed on the **Serial Monitor**, providing real-time atmospheric data for monitoring or environmental applications.

---

## 🧰 Components Required

| Component         | Quantity | Description                             |
|-------------------|----------|-----------------------------------------|
| Arduino UNO R3    | 1        | Main microcontroller                    |
| DHT22 Sensor      | 1        | Digital temp/humidity sensor            |
| 10kΩ Resistor     | 1        | Pull-up resistor for DHT22 data pin     |
| Breadboard        | 1        | For circuit assembly                    |
| Jumper Wires      | Several  | Connections between components          |
| USB Cable         | 1        | For uploading code and serial interface |

---

## 🔌 Circuit Connections

| DHT22 Pin | Connect To        | Description                      |
|-----------|-------------------|----------------------------------|
| VCC       | 5V                | Power supply                     |
| GND       | GND               | Ground                           |
| DATA      | A0                | Sensor data output               |
| 10kΩ Resistor | Between VCC and DATA | Pull-up resistor for signal stability |

---

## ⚙️ Operation Logic

- The **DHT22** reads **temperature (°C)** and **humidity (%)** every 2 seconds.
- The readings are printed to the **Serial Monitor** using `Serial.print()` and `Serial.println()`.
- If the sensor fails, an error message is shown.

---

## 📊 Sample Serial Output
```
DHT22 Sensor Initialization...
Temperature: 28.1 °C
Humidity: 52.3 %

Temperature: 28.3 °C
Humidity: 52.7 %
...
```
---

## ✅ Board Compatibility

| Arduino Board      | Status                            |
|---------------------|------------------------------------|
| Arduino UNO R3      | ✅ Fully Compatible                |
| Arduino UNO R4 (Renesas) | ⚠️ Use DHT_U-compatible libraries |
| Arduino Nano        | ✅ Fully Compatible                |
| Arduino Mega 2560   | ✅ Fully Compatible                |

---

## 🧪 Practical Insights

- Let the sensor **stabilize for 2–3 seconds** after power-up.
- Make sure your wiring is **firm and correct**, especially the **pull-up resistor** between VCC and DATA.
- Use `Serial.begin(9600)` to match your monitor's baud rate.

---

## © License
This project is licensed under the **MIT License**.  
Maintained with ❤️ by **Aditya Sharma/ Drone Electronics**
