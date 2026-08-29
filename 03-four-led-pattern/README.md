# Lesson 3 — Four-LED Timed Pattern (Two-Pair Sequence)

This exercise was demonstrated by the tutor in the video lesson, controlling four LEDs across two output pairs with different timing, resembling a simplified two-way signal sequence.

## What the code does
- Pins 4 and 18 turn ON together for 5 seconds, then OFF for 2.5 seconds.
- Pins 5 and 19 turn ON together for 1 second, then OFF for 2.5 seconds.
- This sequence repeats continuously.

## Setup
- 4 LEDs connected to GPIO 4, 5, 18, and 19, each with a current-limiting resistor to GND
- Board: ESP32 (Arduino IDE)

## What I understood from this lesson
- Multiple pins can be controlled independently within the same loop() by grouping digitalWrite() calls for pins that should switch together.
- Using different delay() durations for each pair creates an intentional, uneven timing pattern rather than a simple synchronized blink.
- This is a basic building block toward simulating real-world timed systems, like traffic lights.

## Reference
Followed directly from the tutorial video lesson (Arduino R4 WiFi series, adapted to ESP32).
