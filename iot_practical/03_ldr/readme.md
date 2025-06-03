# 🌙 Practical 3: Interfacing LDR with LED – Automatic Night Lamp using Arduino UNO R3

> This project simulates an **automatic night lamp** using an LDR (Light Dependent Resistor). The LED automatically turns on in darkness and turns off in light conditions. A basic and essential project for understanding sensor-actuator automation using Arduino.

---

## 🧰 Components Required

| Component            | Quantity | Purpose                                      |
|----------------------|----------|----------------------------------------------|
| Arduino UNO R3       | 1        | Main controller board                        |
| LDR (Photoresistor)  | 1        | Light sensing component                      |
| LED (Any Color)      | 1        | Output actuator (lamp)                       |
| 10kΩ Resistor        | 1        | Forms voltage divider with LDR              |
| Breadboard           | 1        | Mount and connect components                 |
| Jumper Wires         | Several  | For circuit wiring                           |
| USB Cable            | 1        | Power + programming                          |

---

## 🔌 Circuit Connections

### 🟠 LDR & Resistor (Voltage Divider Setup)

| Component | Arduino Pin | Description                             |
|-----------|-------------|-----------------------------------------|
| One leg of LDR | 5V      | Power to LDR                            |
| Other leg of LDR | A0    | Reads analog value                      |
| 10kΩ Resistor | GND ↔ A0 | Connect one leg to GND, other to A0     |

> ⚠️ This creates a voltage divider circuit to convert light intensity into a measurable analog voltage.

---

### 🔵 LED Connection

| Component | Arduino Pin | Description        |
|-----------|-------------|--------------------|
| LED Anode (+) | D8        | Output pin         |
| LED Cathode (-) | GND     | Common ground      |
| (Optional) 220Ω Resistor | In series with LED | To limit current and protect the LED |

---

## 🧠 How It Works

- The **LDR detects ambient light levels** by outputting a variable voltage.
- Arduino reads this value via **analog pin A0**.
- If light intensity drops below the defined **threshold (e.g. 500)**:
  - The **LED turns ON**, simulating a night lamp.
- If brightness exceeds threshold:
  - The **LED turns OFF**.

---

## 💡 Learning Objectives

- Understand analog sensors and how to convert light intensity to voltage.
- Build a voltage divider circuit.
- Implement conditional logic based on sensor data.
- Control actuators (LEDs) using analog inputs.

---

## 🧪 Sensor Characteristics (LDR)

| Parameter     | Behavior                                |
|---------------|------------------------------------------|
| Sensitivity   | Inversely proportional to light         |
| Resistance    | High in dark, low in bright light       |
| Output        | Analog (via voltage divider)            |

---

## ✅ Board Compatibility

| Arduino Board   | Status               |
|------------------|----------------------|
| UNO R3           | ✅ Fully Compatible   |
| UNO R4 (Renesas) | ✅ Fully Compatible   |
| Nano             | ✅ Fully Compatible   |
| Mega 2560        | ✅ Fully Compatible   |

---

## 📌 Notes

- You can **calibrate the `threshold` value** in the code based on your environment's light level. Use the Serial Monitor to see live readings.
- Adding a 220Ω resistor in series with the LED prevents damage.
- The LED will behave like a real-world automatic lamp: **on at night, off during day**.

---

## © License
This project is licensed under the **MIT License**.  
Maintained with ❤️ by **Aditya Sharma/ Drone Electronics**
