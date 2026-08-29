# Lesson 4 — 5-LED Binary Counter (Extended from 4-LED Tutorial)

This was my own independent practice, built after completing the tutorial lessons. The tutor demonstrated a binary counter using 4 LEDs (counting 0–15); I extended this to 5 LEDs to count from 0–31 instead.

## What the code does
Uses 5 LEDs connected to GPIO 2, 4, 5, 18, and 19 to represent a 5-bit binary number. The LEDs count upward in binary from 00000 to 11111 (0 to 31), holding each value for 1 second. After reaching the final value, it pauses for 5 seconds before restarting the count.

## Setup
- 5 LEDs connected to GPIO 2, 4, 5, 18, and 19, each with a current-limiting resistor to GND
- Board: ESP32 (Arduino IDE)
- Bit order (MSB to LSB): Pin 2, Pin 19, Pin 5, Pin 18, Pin 4

## What I understood from this lesson
- Each LED represents one bit, and combining digitalWrite() states across multiple pins can represent a binary number.
- Extending from 4 bits to 5 bits doubles the number of possible combinations (16 → 32), since each added bit multiplies the total states by 2.
- I had to manually work out and write all 32 HIGH/LOW combinations in the correct counting order, which helped me understand binary counting sequences more concretely than just reading about them.
- Since different LED colors (I used a mix of red and green) have different forward voltages, I also had to adjust resistor values individually so each LED received a safe current, rather than using one resistor value for all five.

## Possible improvement (for later)
This code repeats 32 blocks of digitalWrite() calls manually. Once I learn bitwise operations and for-loops better, I could rewrite this using a single loop that calculates each LED's state directly from a binary counter variable, instead of writing out every combination by hand.

## Reference
Own independent practice, extending the tutor's 4-LED binary counter demonstration (Arduino R4 WiFi series, adapted to ESP32).
