# Lesson 7 — Reading a Potentiometer (Analog Input to Voltage)

This exercise was demonstrated by the tutor in the video lesson, introducing analogRead() to read a potentiometer's position and convert it into an actual voltage value.

## What the code does
Reads the potentiometer's raw ADC value (0–4095) and converts it into an actual voltage reading (0–3.3V) using the formula (3.3/4095.0) * potVal, printing both the raw value and calculated voltage to Serial Monitor every second.

## Setup
- Potentiometer connected to GPIO 32 (analog input)
- Board: ESP32 (Arduino IDE)
- Serial Monitor baud rate: 115200

## What I understood from this lesson
- analogRead() lets the ESP32 read a variable voltage from a potentiometer as a number between 0 and 4095, since the ESP32's ADC has a 12-bit resolution (2^12 = 4096 possible values).
- Converting a raw ADC value into a real voltage just needs a simple ratio: multiplying the ADC reading by (max voltage / max ADC value).
- This lesson was purely about reading and understanding sensor input through Serial Monitor, with no actuator (LED) involved yet.

## Reference
Tutorial lesson on Potentiometer Input (Arduino R4 WiFi series, adapted to ESP32).
