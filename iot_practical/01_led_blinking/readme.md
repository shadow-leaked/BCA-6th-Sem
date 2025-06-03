# 💡 Practical 1: Interfacing LED – Blinking LED Using Arduino

> This practical demonstrates the most basic use of Arduino: **blinking an LED**. This teaches digital output control, `delay()` function usage, and introduces fundamental programming logic for physical computing.

---

## 🧰 Components Required

| Component         | Quantity | Purpose                              |
|-------------------|----------|--------------------------------------|
| Arduino UNO R3    | 1        | Main microcontroller board           |
| LED (Any Color)   | 1        | Output device for visual feedback    |
| 220Ω Resistor     | 1        | Protects the LED from overcurrent    |
| Breadboard        | 1        | For assembling the circuit           |
| Jumper Wires      | Several  | To make connections on breadboard    |
| USB Cable         | 1        | Power and program the Arduino        |

---

## 🔌 Circuit Connections

### 🔴 LED Wiring

| Component Pin | Arduino Pin | Description                         |
|---------------|-------------|-------------------------------------|
| LED Anode (+) | D13         | Digital output to blink LED         |
| LED Cathode (-) | GND       | Connect to Arduino ground           |
| 220Ω Resistor | In series   | Connect between LED and pin D13     |

---

## ⚙️ Operation Logic

- The **LED is turned ON** by setting pin D13 to **HIGH**.
- It is **turned OFF** by setting it to **LOW**.
- The `delay()` function is used to wait 1 second between each toggle.
- This creates a visible **blinking effect**, with equal ON and OFF times.

---

## 💡 Learning Objectives

- Understand basic **digital output** control using Arduino.
- Learn how to use `pinMode()` and `digitalWrite()` functions.
- Observe the physical output corresponding to code logic.
- Build confidence in setting up hardware and writing simple logic.

---

## ✅ Board Compatibility

| Arduino Board   | Status               |
|------------------|----------------------|
| UNO R3           | ✅ Fully Compatible   |
| UNO R4 (Renesas) | ✅ Fully Compatible   |
| Nano             | ✅ Fully Compatible   |
| Mega 2560        | ✅ Fully Compatible   |

---

## 🧪 Practical Tips

- You can change `delay(1000)` to a different value (e.g., `500`) to change the blink rate.
- Try blinking multiple LEDs on different pins as an extension.
- If the LED doesn’t blink, check polarity and ensure the resistor is in place.

---

## 📦 Advanced Extensions

- Implement **PWM fade** using `analogWrite()` for brightness control.
- Control the blinking rate using a **potentiometer** as input.
- Build a **Morse code blinker** using the same LED.

---

## © License
This project is licensed under the **MIT License**.  
Maintained with ❤️ by **Aditya Sharma/ Drone Electronics**
