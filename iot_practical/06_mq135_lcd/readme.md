# 🌫️ MQ135 Air Quality Monitor with LCD and LED Indicator

This project reads air quality from an MQ135 sensor, displays the gas level and status (Good, Moderate, Bad) on a 16x2 LCD, and turns on a red LED when the air quality is bad.

---

## ✅ Components Required

| Component            | Quantity | Purpose                            |
|----------------------|----------|------------------------------------|
| Arduino UNO R3       | 1        | Microcontroller platform           |
| MQ135 Gas Sensor     | 1        | Air quality detection              |
| 16x2 LCD Display     | 1        | Shows gas level and status         |
| 220Ω Resistor        | 1        | Current limiting for LED           |
| Red LED              | 1        | Lights up on poor air quality      |
| Jumper Wires         | Several  | Electrical connections             |
| Breadboard           | 1        | Circuit prototyping                |

---

## 🔌 Circuit Connections

### 🟣 MQ135 Sensor

| MQ135 Pin | Arduino Pin | Description               |
|-----------|-------------|---------------------------|
| VCC       | 5V          | Power supply              |
| GND       | GND         | Ground connection         |
| AOUT      | A0          | Analog output to Arduino  |

---

### 🟢 LCD Display (16x2)

| LCD Pin | Arduino Pin | Description                  |
|---------|-------------|------------------------------|
| RS      | D12         | Register Select              |
| E       | D11         | Enable                       |
| D4      | D5          | Data 4                       |
| D5      | D4          | Data 5                       |
| D6      | D3          | Data 6                       |
| D7      | D2          | Data 7                       |
| VSS     | GND         | Ground                       |
| VDD     | 5V          | Power                        |
| V0      | Potentiometer Mid | LCD contrast         |
| A       | 5V          | LCD backlight (optional)     |
| K       | GND         | LCD backlight (optional)     |

---

### 🔴 LED Indicator

| LED Pin       | Arduino Pin | Description                        |
|---------------|-------------|------------------------------------|
| Anode (+)     | D7 (via 220Ω)| Red LED lights up on bad air       |
| Cathode (-)   | GND         | Ground                             |

---

## 🧠 How It Works

- MQ135 outputs an analog voltage based on air quality.
- The Arduino reads this value and classifies the air quality as:
  - **≤ 200**: Good  
  - **201–400**: Moderate  
  - **> 400**: Bad (🔴 LED turns ON)
- Status is displayed on the **16x2 LCD** and also printed to the **Serial Monitor**.

---

## 📋 Tips

- Let the **MQ135 warm up for 1–2 minutes** before taking readings.
- Avoid placing the sensor near **air vents, fans, or AC units** during testing.
- **Adjust the thresholds** depending on your specific indoor environment.

---

## ✅ Compatibility

| Arduino Board  | Status         |
|----------------|----------------|
| Arduino UNO    | ✅ Tested       |
| Arduino Nano   | ✅ Compatible   |
| Arduino Mega   | ✅ Compatible   |

---

## © License

This project is licensed under the **MIT License**.  
Maintained with ❤️ by **Aditya Sharma / Drone Electronics**
