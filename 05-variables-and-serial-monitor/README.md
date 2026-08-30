# Lesson 5 — Variables and Serial Monitor

This exercise was demonstrated by the tutor in the video lesson, introducing variables and the Serial Monitor across three progressively more advanced examples.

## What each program does
- **blink_led.ino** — Blinks an LED using a variable for the pin number, and prints "Hello "/"World!" to Serial Monitor on each on/off cycle.
- **led_serial_monitor.ino** — Extends this using more variables: a pin variable, a wait-time variable, and two String message variables ("Your LED is ON"/"OFF"), printed via Serial.println().
- **variables_circle.ino** — Contains two variable examples from the same lesson:
  1. **Addition example (commented out)** — Uses integer variables x, y, and z, where z = x + y, printed to Serial Monitor as "x op y eq z". This was left in the code as a comment to show a simpler starting example before moving to the circle calculation.
  2. **Circle area example (active)** — Calculates and prints the area of a circle using float variables (myPi, myRadius, myArea), where myRadius increases by 0.1 every loop, showing a variable that changes value continuously instead of staying fixed.

## Setup
- LED connected to GPIO 2, with a current-limiting resistor to GND
- Board: ESP32 (Arduino IDE)
- Serial Monitor baud rate: 115200

## What I understood from this lesson
- Variables let you name and reuse values (pin numbers, delay times, messages) instead of hardcoding them everywhere in the code.
- Serial.print() and Serial.println() let you see what's happening inside the program in real time, which is useful for checking values without needing physical output like an LED.
- The addition example (x, y, z) showed the simplest form of using variables in a calculation, printed as readable output using multiple Serial.print() calls in sequence.
- The circle example built on this by showing that a variable can update every loop (myRadius = myRadius + .1), which changes the program's behavior over time, not just once.
- String variables can hold text, not just numbers, which is useful for printing readable, labeled output to Serial Monitor.

## Reference
Tutorial lesson on Variables and Serial Monitor (Arduino R4 WiFi series, adapted to ESP32).
