# Lesson 6 — Analog Brightness Ramp (Introduction to analogWrite)

This exercise was demonstrated by the tutor in the video lesson, introducing analogWrite() as a new way to control LED brightness using variables.

## What the code does
Gradually increases LED brightness by adding 25 to a "bright" variable every loop, then applies that value using analogWrite(), with a 1.5 second delay between each increase.

## Setup
- LED connected to GPIO 2, with a current-limiting resistor to GND
- Board: ESP32 (Arduino IDE)

## What I understood from this lesson
- Unlike digitalWrite(), which only sets a pin fully HIGH or LOW, analogWrite() can set a pin to a range of values, allowing gradual brightness control instead of just on/off.
- This uses the same "variable that updates every loop" idea from variables_circle.ino, but applied to control real hardware output (LED brightness) instead of just a calculation.
- I noticed the brightness value keeps increasing indefinitely in this version — a good next question to explore is what happens when it goes past the maximum allowed value, and how to reset or limit it.

## Reference
Tutorial lesson on Variables (analogWrite extension), following directly after Lesson 5 (Arduino R4 WiFi series, adapted to ESP32).
