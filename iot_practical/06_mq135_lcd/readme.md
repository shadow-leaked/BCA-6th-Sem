# 🔥 Practical 6: Interfacing MQ135 Gas Sensor with LED & Buzzer Alert on Arduino UNO R3

> This practical demonstrates how to detect harmful gas levels using the MQ135 sensor and provide visual (LED) and audible (buzzer) alerts. If the gas concentration crosses a harmful threshold, a red LED lights up and the buzzer rings; otherwise, a green LED indicates safe air quality.

---

## 🧰 Components Required

| Component               | Quantity | Purpose                                                        |
|-------------------------|----------|----------------------------------------------------------------|
| Arduino UNO R3          | 1        | Microcontroller platform                                       |
| MQ135 Gas Sensor        | 1        | Detects harmful gases (NH₃, CO₂, benzene, etc.)                |
| Red LED                 | 1        | Visual alert for harmful gas                                   |
| Green LED               | 1        | Visual indicator for safe air                                  |
| Buzzer (active/passive) | 1        | Audible alert on harmful gas detection                         |
| 220Ω Resistor           | 2        | Current limiting resistors for LEDs                            |
| Jumper Wires            | Several  | For connections                                                |
| Breadboard              | 1        | For prototyping                                                |

---

## 🔌 Circuit Connections

### 🟣 MQ135 Gas Sensor

| MQ135 Pin | Arduino Pin | Description                     |
|-----------|-------------|---------------------------------|
| VCC       | 5V          | Power supply                    |
| GND       | GND         | Common ground                   |
| AOUT      | A0          | Analog signal output            |

---

### 🔴 Red & Green LEDs

| LED        | Arduino Pin | Notes                                 |
|------------|-------------|---------------------------------------|
| Red LED +  | D7          | Via 220Ω resistor                     |
| Red LED –  | GND         | Common ground                         |
| Green LED +| D6          | Via 220Ω resistor                     |
| Green LED –| GND         | Common ground                         |

---

### 🔊 Buzzer

| Buzzer Pin | Arduino Pin | Description                          |
|------------|-------------|--------------------------------------|
| +          | D5          | Can use 100Ω resistor for passive buzzers |
| –          | GND         | Connect to Arduino ground            |

---

## 📋 Functional Description

- The **MQ135 sensor** continuously monitors gas concentration.
- The analog value is read from pin **A0**.
- When the gas level crosses a preset **threshold (e.g., 400)**:
  - 🔴 **Red LED turns ON**
  - 🔊 **Buzzer starts beeping**
  - ✅ **Green LED turns OFF**
- Otherwise:
  - 🟢 **Green LED stays ON**
  - 🔕 **Red LED and buzzer stay OFF**

---

## 🧠 Learning Objectives

- Understand how to read analog data from a gas sensor.
- Interface multiple output devices with sensor logic (LEDs & Buzzer).
- Implement conditional response based on sensor thresholds.
- Build real-world safety alert systems using Arduino.

---

## ✅ Board Compatibility

| Arduino Board | Status                          |
|----------------|----------------------------------|
| UNO R3         | ✅ Tested                        |
| UNO R4         | ✅ Fully Compatible (Renesas)    |
| Nano           | ✅ Compatible                    |
| Mega 2560      | ✅ Compatible                    |

---

## 🛠️ Libraries Used

> ❌ No external libraries required for this practical.

---

## 🧪 Best Practices

- Allow the MQ135 sensor to **warm up for 1–2 minutes** for stable readings.
- Test in a ventilated area and **avoid flames or toxic fumes** during experiments.
- Use **Serial Monitor** to observe real-time analog gas levels for calibration.

---

## 🧑‍💻 Contributing

Your suggestions and contributions are welcome.  
Fork the repo or submit issues if you have ideas for improvements.

---

## © License

This project is licensed under the **MIT License**.  
Maintained with ❤️ by **Aditya Sharma / Drone Electronics**
