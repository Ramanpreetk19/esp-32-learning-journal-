# Lesson 1 — Blinking an LED on ESP32

I started my ESP32 learning journey with the simplest possible exercise: making an LED blink on and off. I'm following Paul McWhorter's Arduino Uno R4 WiFi beginner series, but running everything on my own ESP32 board instead of the R4 WiFi.

## What the code does
Turns an LED connected to GPIO 2 on for 500ms, then off for 500ms, repeating this forever.

## Setup
- LED connected to GPIO 2, with a current-limiting resistor in series to GND
- Board: ESP32 (Arduino IDE)

## What I understood from this lesson
- `pinMode()` tells the board whether a pin is being used as an input or output — here, GPIO 2 is set as OUTPUT.
- `digitalWrite()` sets that pin HIGH (on) or LOW (off).
- `delay()` pauses the program for a set number of milliseconds before the next line runs.
- `loop()` keeps repeating this on/off pattern indefinitely, which is why the LED keeps blinking.

## Resistor value calculation
Different LED colors need different resistor values, because each color has a different forward voltage drop. I calculated this using Ohm's Law:

R = (Vsupply − Vled) / Iled

For a red LED specifically:
- Vsupply (ESP32 output pin) ≈ 3.3V
- Vled (red LED forward voltage) ≈ 1.8–2V
- Iled (safe LED current) ≈ 15–20mA (0.015–0.02A)

R = (3.3 − 2.0) / 0.02 ≈ 65Ω → rounded up to a standard 100Ω or 220Ω resistor for safety margin.

This is different for other colors — for example, a blue or white LED has a higher forward voltage (~3–3.2V), so it needs a smaller resistor value at the same supply voltage, since less voltage needs to be "dropped" across the resistor.

## Notes on adapting from Arduino to ESP32
GPIO 2 works the same way as a digital output pin on both boards. One important difference to remember: the ESP32 outputs 3.3V logic, not 5V like many classic Arduino boards, which is why the resistor calculation above uses 3.3V as the supply voltage instead of 5V.

## Reference
Video followed: Arduino Uno R4 WiFi LESSON 1 — Paul McWhorter (adapted to run on ESP32)
