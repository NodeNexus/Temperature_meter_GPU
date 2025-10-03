# LM35 Temperature Meter  

This project demonstrates how to use the **LM35 temperature sensor** with Arduino to measure temperature accurately. The measured values can be displayed on a Serial Monitor, LCD, or even used to trigger fans/cooling systems (like a GPU cooling controller).  

---

## 📑 Table of Contents  
- [Introduction](#introduction)  
- [Features](#features)  
- [Hardware Requirements](#hardware-requirements)  
- [Circuit Setup](#circuit-setup)  
- [Code Upload](#code-upload)  
- [Working Principle](#working-principle)  
- [Applications](#applications)  
- [Contributing](#contributing)  

---

## 📝 Introduction  
The **LM35** is a precision integrated-circuit temperature sensor whose output voltage is linearly proportional to the Celsius temperature. It provides a simple and cost-effective solution for temperature measurement in electronics and IoT projects.  

When connected to an **Arduino**, the LM35 can monitor real-time temperature values, which can be used for:  
- Displaying on Serial Monitor or LCD  
- Controlling cooling fans (like GPU/CPU systems)  
- Safety shutdowns in overheating conditions  

---

## 🚀 Features  
- Simple analog interface with Arduino  
- Linear output: 10mV per °C  
- Accuracy of ±0.5°C at room temperature  
- Low cost and low power consumption  
- Can be expanded for fan control / GPU temperature monitoring  

---

## 🔌 Hardware Requirements  
- Arduino UNO / Nano / ESP8266  
- LM35 Temperature Sensor  
- Jumper Wires  
- Breadboard  
- (Optional) 16x2 LCD or OLED Display  
- (Optional) Relay + Fan for cooling control  

---

## 🛠 Circuit Setup  
LM35 Pinout:  

| LM35 Pin | Connection |  
|----------|------------|  
| VCC      | 5V         |  
| GND      | GND        |  
| OUT      | A0 (Arduino Analog Pin) |  

---
