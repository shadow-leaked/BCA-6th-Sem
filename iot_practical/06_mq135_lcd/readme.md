# 🌫️ Practical 6: Interfacing MQ135 Air Quality Sensor with LCD and LED on Arduino UNO R3

> This practical demonstrates how to measure and display air quality using the MQ135 gas sensor, a 16x2 LCD display, and an LED indicator. The analog output from the sensor is read by the Arduino, categorized into Good, Moderate, or Bad air quality, and triggers an LED alert when air quality is poor.

---

## 🧰 Components Required

| Component               | Quantity | Purpose                                                   |
|-------------------------|----------|------------------------------------------------------------|
| Arduino UNO R3          | 1        | Microcontroller platform                                   |
| MQ135 Air Quality Sensor| 1        | Detects gases like NH₃, CO₂, benzene, etc.                |
| 16x2 LCD Display        | 1        | Visual output of air quality values                        |
| 10kΩ Potentiometer      | 1        | Adjust LCD contrast                                        |
| LED (any color)         | 1        | Visual alert for bad air quality                           |
| 220Ω Resistor (for LED) | 1        | Current limiting resistor for LED                          |
| Jumper Wires            | Several  | For making electrical connections                          |
| Breadboard              | 1        | Prototyping and mounting platform                          |

---

## 🔌 Circuit Connections

### 🟣 MQ135 Air Quality Sensor

| MQ135 Pin | Arduino Pin | Description                     |
|-----------|-------------|---------------------------------|
| VCC       | 5V          | Power supply                    |
| GND       | GND         | Common ground                   |
| AOUT      | A3          | Analog signal output to Arduino |

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

### 🔴 LED Indicator

| LED Pin | Arduino Pin | Description                       |
|---------|-------------|-----------------------------------|
| Anode (+) | D8         | Connected via 220Ω resistor       |
| Cathode (-) | GND      | Connected to Arduino ground       |

---

## 📋 Functional Description

- **Sensor Input**: The MQ135 outputs an analog voltage corresponding to the gas concentration in the environment.
- **Data Processing**: The analog signal is read via the Arduino's analog pin (A3), and the value is compared to preset thresholds.
- **Status Classification**:
  - `> 400` → Bad Air
  - `201 - 400` → Moderate Air
  - `0 - 200` → Good Air
- **Output**:
  - The raw analog value and air quality status are displayed on a 16x2 LCD.
  - An **LED is automatically turned ON when air quality is BAD**, acting as a quick visual alert.

---

## 🧠 Learning Objectives

- Understand how analog gas sensors like MQ135 work.
- Learn to display real-time sensor data on an LCD.
- Integrate LED indicators with sensor logic.
- Practice conditional logic for real-world environmental monitoring in Arduino.

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

- **LiquidCrystal** – Handles LCD control and output formatting.

---

## 🧪 Best Practices

- Keep the sensor powered for a few minutes before reading for more stable output (sensor warm-up time).
- Avoid placing the sensor near airflow or volatile chemicals during calibration.
- Use the onboard potentiometer to fine-tune LCD visibility.
- Place the LED in a clearly visible location for quick hazard indication.

---

## 🧑‍💻 Contributing

Your contributions are welcome!  
Feel free to fork the project or open an issue under the **Issues** tab if you find bugs or want to suggest improvements.

---

## © License
This project is licensed under the **MIT License**.  
Maintained with ❤️ by **Aditya Sharma / Drone Electronics**
