---

# 🔥 Arduino Fire Detection System with SIM800 (Call Alert)

A smart fire detection system using Arduino, SIM800 GSM module, servo motor, and buzzer.
When fire is detected, the system automatically calls your phone and activates an alarm.

---

## 🚀 Features

* 🔥 Detects fire using a flame sensor
* 📞 Automatically calls your phone using SIM800
* 🔊 Buzzer alarm for immediate alert
* 🤖 Servo motor scans when no fire is detected
* ⚡ Real-time monitoring system

---

## 🧰 Components Used

* Arduino Uno
* SIM800 / SIM800L GSM Module
* Flame Sensor
* Servo Motor
* Buzzer
* Jumper Wires
* 3.7V Battery (for SIM800)

---

## 🔌 Wiring Overview

| Component    | Arduino Pin   |
| ------------ | ------------- |
| Flame Sensor | D8            |
| Buzzer       | D7            |
| Servo Motor  | D9            |
| SIM800 TX    | D11           |
| SIM800 RX    | D10           |
| SIM800 VCC   | 3.7V Battery  |
| GND          | Common Ground |

---

## ⚙️ How It Works

1. The system continuously monitors the flame sensor
2. When fire is detected:

   * The buzzer turns ON
   * The servo stops moving
   * A phone call is made automatically
3. When no fire is detected:

   * The buzzer turns OFF
   * The servo motor scans left and right

---

## 📲 Setup Instructions

* Connect all components as shown in the wiring table
* Insert a working SIM card into the SIM800 module
* Set your phone number in the code before uploading
* Power the SIM800 with a stable 3.7V battery
* Upload the code to Arduino and test

---

## ⚠️ Important Notes

* Do NOT power SIM800 from Arduino 5V
* Always use a proper antenna for signal
* Add a capacitor (1000µF) for stable performance
* Use a voltage divider for SIM800 RX pin

---

## 💡 Applications

* Home fire safety system
* Car fire alert system
* DIY security and IoT projects

---

## 👨‍💻 Author

**Benayas Wondwosen (Benu Tech)**

---
