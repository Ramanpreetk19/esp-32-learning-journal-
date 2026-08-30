# Lesson 9 — Reading User Input from Serial Monitor

This exercise was demonstrated by the tutor in the video lesson, introducing how to read user input typed into the Serial Monitor, using while loops and different input-parsing functions.

## What the code does
Prompts the user for three different values one at a time — an integer, a float, and their name — waiting for input before moving to the next prompt, then prints each value back as confirmation.

## Setup
- Board: ESP32 (Arduino IDE)
- Serial Monitor baud rate: 115200
- No external components needed; input is typed directly into the Serial Monitor's input box

## What I understood from this lesson
- Serial.available() returns the number of bytes waiting to be read from the Serial Monitor. If nothing has been typed yet, it returns 0.
- A while (Serial.available() == 0) {} loop with an empty body is used to pause the program, doing nothing until the user actually types something — this was my first practical use of a while loop.
- Different functions are used depending on the type of input expected: Serial.parseInt() for whole numbers, Serial.parseFloat() for decimals, and Serial.readString() for text.
- This is different from the earlier lessons where the program only sent information out (Serial.print()); here, the program also receives information from the user in real time.

## Reference
Tutorial lesson on Serial Input and While Loops (Arduino R4 WiFi series, adapted to ESP32).
