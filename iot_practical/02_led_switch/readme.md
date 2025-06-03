# 🔘 Practical 2: Interfacing Button and LED – Control LED Using Push Button

> This practical demonstrates how to use a **digital input (button)** to control a **digital output (LED)** using the Arduino UNO R3. When the button is pressed, the LED lights up. This is a fundamental exercise to understand digital I/O and logic control.

---

## 🧰 Components Required

| Component            | Quantity | Purpose                               |
|----------------------|----------|---------------------------------------|
| Arduino UNO R3       | 1        | Main microcontroller board            |
| Push Button          | 1        | User input control                    |
| LED (Any Color)      | 1        | Output indicator                      |
| 220Ω Resistor        | 1        | Current limiting for LED              |
| Breadboard           | 1        | For non-permanent wiring              |
| Jumper Wires         | Several  | Circuit connections                   |
| USB Cable            | 1        | Power and programming interface       |

---

## 🔌 Circuit Connections

### 🟢 Button Wiring

| Component Pin | Arduino Pin | Description                       |
|---------------|-------------|-----------------------------------|
| One leg of button | GND      | Ground side                      |
| Other leg of button | D7     | Reads digital input              |

> ⚠️ Internal pull-up resistor is enabled in code using `INPUT_PULLUP`. This makes the default state HIGH and changes to LOW when pressed.

---

### 🔴 LED Wiring

| Component Pin | Arduino Pin | Description                |
|---------------|-------------|----------------------------|
| LED Anode (+) | D13         | Digital output for LED     |
| LED Cathode (-) | GND       | Common ground              |
| 220Ω Resistor | In series   | Prevents LED damage        |

---

## 🧠 How It Works

- The **push button** connects **digital pin D7** to **GND** when pressed.
- With `INPUT_PULLUP` enabled, the button pin is **normally HIGH**.
- When pressed, the pin goes **LOW**, triggering the **LED to turn ON**.
- When released, pin is HIGH again, turning **LED OFF**.

---

## 💡 Learning Objectives

- Understand digital input and output operations.
- Learn internal pull-up configuration to avoid floating input issues.
- Build interaction logic between human input and hardware output.
- Observe real-time responses to user input via physical control.

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

- If the LED behaves inversely (ON when not pressed), double-check the wiring and internal pull-up usage.
- You can extend this to **toggle-based control**, or add **debounce logic** for real-world use.

---

## © License
This project is licensed under the **MIT License**.  
Maintained with ❤️ by **Aditya Sharma/ Drone Electronics**
