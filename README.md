# 🌫️ Air Quality & Smog Detection System (Arduino + OOP)
FINAL OOP PROJECT

NAME: MUHAMMAD SULEMAN ELAHI


SAP: 70172884

NAME: ALI HASSAN


SAP: 70152765

NAME: ARMAGHAN NASIR


SAP:  70172753

NAME: JAMEEL WAIN


SAP:  70175218






📌 Overview
This project implements a real-time **Air Quality and Smog Detection System** using an **Arduino Uno** and an **MQ-135 gas sensor**.  
It continuously monitors air quality levels, alerts users when pollution exceeds safe thresholds, and demonstrates a modular design using **Object-Oriented Programming (OOP)** in C++.

 🎯 Features
- Real-time air quality monitoring
- Detection of smog and pollution
- Visual and audible alerts (LEDs and buzzer)
- Modular OOP-based software design
- Easily extendable for IoT and advanced applications

---

## 🧰 Hardware Components
| Component | Description |
|-----------|------------|
| Arduino Uno | Microcontroller |
| MQ-135 Gas Sensor | Measures CO₂, NH₃, NOx, smoke, and other gases |
| Green LED | Indicates good air quality |
| Red LED | Indicates poor air quality / smog |
| Buzzer | Audio alert for dangerous air levels |
| Resistors (220Ω) | LED protection |
| Breadboard & Jumper Wires | For connections |


🔌 Pin Configuration
| Component | Arduino Pin |
|-----------|------------|
| MQ-135 AOUT | A0 |
| Green LED | 6 |
| Red LED | 7 |
| Buzzer | 8 |

---

## 🧠 OOP Concepts Implemented
- Encapsulation: Classes manage their own internal data.
- Abstraction: Users interact only with high-level methods like `analyzeAir()`.
- Composition: `AirQualityMonitor` contains `GasSensor` and `AlertSystem`.
- Reusability:Classes can be reused in other Arduino or IoT projects.

