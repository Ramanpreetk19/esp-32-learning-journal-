# Lesson 8 — Using a Potentiometer to Control LED Brightness

This exercise was demonstrated by the tutor in the video lesson, building directly on Lesson 7 by using the potentiometer's value to control an LED's brightness instead of just reading it.

## What the code does
Reads the potentiometer and uses its value to control LED brightness via analogWrite(). Instead of simple linear mapping, it uses an exponential scaling formula (pow(2, potVal/511.875) - 1) to convert the 0–4095 potentiometer range into a 0–255 brightness value, because human eyes perceive brightness changes exponentially, not linearly.

## Setup
- Potentiometer connected to GPIO 32 (analog input)
- LED connected to GPIO 27, with a current-limiting resistor to GND
- Board: ESP32 (Arduino IDE)
- Serial Monitor baud rate: 115200

## The two mapping equations
The code includes two different ways to convert the potentiometer's raw value into a brightness value, one commented out and one active:

1. **Linear (straight-line) equation** — commented out in the code:
   writeVal = (3.3 / 4095.0) * potVal
   This maps the potentiometer range directly and evenly to the output range. However, it isn't suitable for LED brightness, because it doesn't match how the human eye actually perceives light.

2. **Exponential equation** — the active line used in the code:
   writeVal = pow(2, potVal / 511.875) - 1
   This scales the brightness exponentially instead of linearly, so that equal turns of the potentiometer feel like equal steps in brightness to the human eye. This is because human perception of brightness (and dimness) follows a roughly logarithmic/exponential response, not a straight-line one — small changes matter more at low brightness than at high brightness.

## What I understood from this lesson
- This lesson extends Lesson 7 by connecting sensor input (potentiometer) directly to actuator output (LED brightness), rather than just displaying values on Serial Monitor.
- A straight-line (linear) mapping between potentiometer position and LED brightness doesn't look "linear" to the human eye — the exponential scaling formula compensates for this, so turning the potentiometer feels like a smooth, even brightness change instead of a sudden jump near one end.
- In C++/Arduino, the pow() function is used to raise a number to a power — here, pow(2, potVal/511.875) calculates 2 raised to the power of (potVal/511.875), which is the core of the exponential brightness curve.
- I saw both approaches directly compared in the code: the commented-out line shows the simple linear mapping, and the active line shows the improved exponential version.

## Reference
Tutorial lesson on Potentiometer-Controlled LED Brightness, following directly after Lesson 7 (Arduino R4 WiFi series, adapted to ESP32).
