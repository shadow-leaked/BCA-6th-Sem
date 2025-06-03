# 🌡️ Practical 5: Interfacing DHT22 Temperature & Humidity Sensor with LCD using Arduino UNO R3

> This project demonstrates how to measure ambient temperature and humidity using a **DHT22 sensor** and display the real-time values on a **16x2 LCD** using Arduino UNO R4. Ideal for environmental monitoring, weather stations, or smart home projects.

---

## 🧰 Components Required

| Component            | Quantity | Purpose                                        |
|----------------------|----------|------------------------------------------------|
| Arduino UNO R3       | 1        | Main microcontroller                          |
| DHT22 Sensor         | 1        | Measures temperature and humidity             |
| 16x2 LCD Display     | 1        | Displays sensor readings                      |
| 10kΩ Potentiometer   | 1        | Adjust LCD contrast                           |
| Breadboard           | 1        | For mounting and connecting components        |
| Jumper Wires         | Several  | For circuit wiring                            |
| USB Cable            | 1        | To program and power the Arduino              |

---

## 🔌 Circuit Connections

### 🟢 DHT22 Sensor

| DHT22 Pin | Arduino Pin | Description             |
|-----------|-------------|-------------------------|
| VCC       | 5V          | Power supply            |
| GND       | GND         | Ground                  |
| DATA      | A0          | Data pin (digital input)|

> 📌 A 10kΩ pull-up resistor is recommended between **DATA and VCC** for stable readings.

---

### 🔵 16x2 LCD Display

| LCD Pin | Arduino Pin | Function             |
|---------|-------------|----------------------|
| RS      | D12         | Register select      |
| E       | D11         | Enable               |
| D4      | D5          | Data line 4          |
| D5      | D4          | Data line 5          |
| D6      | D3          | Data line 6          |
| D7      | D2          | Data line 7          |
| VSS     | GND         | Ground               |
| VDD     | 5V          | Power supply         |
| V0      | Potentiometer | Contrast control     |
| A       | 5V (optional)| LCD backlight        |
| K       | GND         | LCD backlight ground |

---

## 🧠 How It Works

1. The Arduino reads **temperature and humidity** from the DHT22 sensor every 2 seconds.
2. The LCD is used to display:
   - First row: Temperature in °C.
   - Second row: Relative Humidity in %.
3. If the sensor fails to respond, “Sensor Error” is shown.
4. The DHT library handles timing and data parsing internally.

---

## 💡 Learning Objectives

- Read digital sensor data using a **DHT22**.
- Display real-time environmental data on a **16x2 LCD**.
- Use the `DHT.h` and `LiquidCrystal.h` libraries in Arduino IDE.
- Understand interfacing and timing with digital sensors.

---

## ✅ Board Compatibility

| Arduino Board   | Status               |
|------------------|----------------------|
| UNO R3           | ✅ Fully Compatible   |
| UNO R4 (Renesas) | ✅ Fully Compatible   |
| Nano             | ✅ Fully Compatible   |
| Mega 2560        | ✅ Fully Compatible   |

> ⚠️ Use a **DHT library compatible with Renesas UNO R4**. Prefer [Adafruit DHT Sensor Library](https://github.com/adafruit/DHT-sensor-library) with `DHT_U` support if needed.

---

## 🧪 Sensor Specifications (DHT22)

| Parameter      | Range        | Accuracy    |
|----------------|--------------|-------------|
| Temperature    | -40 to 80°C  | ±0.5°C      |
| Humidity       | 0–100% RH    | ±2% RH      |
| Output         | Digital      | Single wire |

---

## 🧑‍💻 Notes

- Always wait 2 seconds between readings for best stability.
- Do not use **DHT11** with this sketch unless you change the `#define DHTTYPE` macro.
- Adjust LCD **contrast using the potentiometer** for best visibility.
- If readings are `NaN`, double-check wiring and ensure DHT is receiving 5V.

---

## © License
This project is licensed under the **MIT License**.  
Maintained with ❤️ by **Aditya Sharma/ Drone Electronics**
