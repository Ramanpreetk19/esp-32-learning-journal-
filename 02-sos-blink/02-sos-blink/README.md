# Lesson 2 — SOS Blink Pattern (Morse Code) on ESP32

After the basic blink exercise, I wanted to try controlling timing more intentionally, 
so I built an LED pattern that blinks out "SOS" in Morse code.

## What the code does
Blinks an LED connected to GPIO 2 in the SOS Morse pattern:
- Three short blinks (100ms on, 100ms off) → "S"
- Three long blinks (500ms on, 500ms off) → "O"
- Three short blinks again (100ms on, 100ms off) → "S"
- Pauses 800ms before starting and 1000ms after finishing, before repeating.

## Setup
- LED connected to GPIO 2, with a current-limiting resistor to GND
- Board: ESP32 (Arduino IDE)

## What I understood from this lesson
- Morse code timing depends entirely on relative delay values — a "short" blink and 
  a "long" blink use the exact same digitalWrite() logic, just different delay() durations.
- Since loop() runs continuously, I added delay(800) and delay(1000) at the start and end 
  so the SOS pattern has a clear pause before repeating, instead of blinking non-stop with no gap.
- This showed me how the same two functions (digitalWrite, delay) can be reused in sequence 
  to build a recognizable pattern, not just a single on/off blink.

## Possible improvement (for later)
The current code repeats the same four lines nine times. Once I learn functions and loops 
better, I can shorten this by writing a shortBlink() and longBlink() function instead of 
repeating the same lines manually.

## Reference
Built independently as a small extension after Lesson 1 (basic blink), inspired by 
Morse code timing patterns.
