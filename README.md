# 🔬 IoT Practicals with Arduino — Comprehensive Lab Series

> **Organization:** Open-Source (NPO)  
> **Institution:** NIELIT Imphal  
> **Maintained by:** Shadow Leaked   
> **Board:** Arduino UNO R4 / UNO R3 Compatible  
> **Target:** Students under Manipur University

---

## 📖 Index of Practicals

| No. | Practical Title                                                                                              | Sensors/Modules Used             | Difficulty |
|-----|--------------------------------------------------------------------------------------------------------------|----------------------------------|------------|
| 1   | [🔴 LED Blinking](#1-interfacing-light-emitting-diodeled--blinking-led)                                      | LED                              | 🟢 Easy    |
| 2   | [🔘 Button + LED](#2-interfacing-button-and-led--led-blinkingglow-when-button-is-pressed)                    | Push Button, LED                 | 🟢 Easy    |
| 3   | [🌒 LDR + LED (Night Lamp)](#3-interfacing-light-dependent-resistor-ldr-and-led--automatic-night-lamp)       | LDR, Resistor, LED               | 🟢 Easy    |
| 4   | [🌡️ Temperature & Humidity Sensor](#4-interfacing-temperature-sensorlm35-andor-humidity-sensor-eg-dht11)     | LM35 or DHT11/DHT22              | 🟡 Medium  |
| 5   | [📺 LCD Display Interface](#5-interfacing-liquid-crystal-displaylcd--display-data-generated-by-sensor)       | 16x2 LCD                         | 🟡 Medium  |
| 6   | [🟢 MQ135 Air Quality + LCD ](#6-interfacing-air-quality-sensor-eg-mq135--lcd--led-warning-system)           | MQ135, LCD                       | 🟡 Medium  |
| 7   | [📲 Bluetooth HC-05 + LCD](#7-interfacing-bluetooth-module-eg-hc05--receive-data--display-on-lcd)            | HC-05, LCD                       | 🟠 Hard    |
| 8   | [🏠 Bluetooth + Relay Home Automation](#8-interfacing-relay-module--bluetooth-based-home-automation)         | Relay Module, HC-05              | 🔴 Advanced |

---

## [1. Interfacing Light Emitting Diode(LED) – Blinking LED](./iot_practical/01_led_blinking/)
**Objective:** Basic LED blinking using digital output.  
**Skills:** Digital output, `delay()`, `pinMode()`, `digitalWrite()`  
🧪 Code File: `01_led_blinking.ino`

---

## [2. Interfacing Button and LED – LED blinking/glow when button is pressed](./iot_practical/02_led_switch/)
**Objective:** LED responds to button press using digital input.  
**Skills:** Digital input, debouncing (basic), control logic  
🧪 Code File: `02_led_switch.ino`

---

## [3. Interfacing Light Dependent Resistor (LDR) and LED – Automatic Night Lamp](./iot_practical/03_ldr/)
**Objective:** Detect ambient light to auto switch LED at night.  
**Skills:** Analog read, threshold logic, sensors  
🧪 Code File: `03_ldr.ino`

---

## [4. Interfacing Temperature Sensor (LM35) and/or Humidity Sensor (DHT11/DHT22)](./iot_practical/04_dht22/)
**Objective:** Read and display temperature/humidity from sensors.  
**Skills:** Analog & digital sensors, calibration, libraries  
🧪 Code File: `04_dht22.ino`

---

## [5. Interfacing Liquid Crystal Display (LCD)](./iot_practical/05_lcd_display/)
**Objective:** Interface 16x2 LCD to display real-time sensor data.  
**Skills:** LCD command structure, `LiquidCrystal` library  
🧪 Code File: `05_lcd_display.ino`

---

## [6. Interfacing Air Quality Sensor (MQ135) – Display on LCD](./iot_practical/06_mq135_lcd/) 
**Objective:** Detect poor air quality, display data. 
**Skills:** Analog sensors, environmental monitoring, alert logic  
🧪 Code File: `06_mq135_lcd_led.ino`

---

## [7. Interfacing Bluetooth Module (HC-05) – Receive and Display on LCD](./iot_practical/07_bluetooth_lcd/)
**Objective:** Wirelessly receive messages from smartphone via Bluetooth and display them.  
**Skills:** `SoftwareSerial`, UART communication, mobile control  
🧪 Code File: `07_bluetooth_lcd.ino`

---

## [8. Interfacing Relay Module – Bluetooth-Based Home Automation](./iot_practical/08_bluetooth_relay/)
**Objective:** Switch appliances remotely using Bluetooth commands.  
**Skills:** Relay control, opto-isolation, smart automation  
🧪 Code File: `08_bluetooth_relay.ino`

---

## 📂 Folder Structure

```plaintext
📦IoT-Practicals
 ┣ 📁 01_led_blinking
 ┣ 📁 02_led_switch
 ┣ 📁 03_ldr
 ┣ 📁 04_dht22
 ┣ 📁 05_lcd_display
 ┣ 📁 06_mq135_lcd
 ┣ 📁 07_bluetooth_lcd
 ┣ 📁 08_bluetooth_relay
 ┣ 📄 README.md
```
## 📲 Mobile App for Bluetooth Control

You can use any free Android app like **“Serial Bluetooth Terminal”** or **“Bluetooth Electronics”** from the Play Store to communicate with the HC-05 Bluetooth module.

---

## 🛠️ Board Compatibility

| Board                 | Status                                     |
|----------------------|--------------------------------------------|
| Arduino UNO          | ✅ Tested                                   |
| Arduino UNO R4       | ⚠️ Use `DHT_U`-compatible libraries         |
| Arduino Nano         | ✅ Supported                                |
| Arduino Mega 2560    | ✅ Supported                                |

---

## 🧑‍💻 Contributing

Contributions and forks are welcome!  
Feel free to submit issues, bug reports, or feature requests using the **Issues** tab of this repository.

---

## © License
This project is licensed under the **MIT License**.  
Maintained with ❤️ by **Aditya Sharma/ NIELIT Imphal, Drone Electronics**

---