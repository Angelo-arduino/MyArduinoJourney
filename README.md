# MyArduinoJourney
My personal Arduino projects from beginner to advanced
# LED Blink Project

## Overview
A simple Arduino project that demonstrates how to blink an LED using a breadboard and basic components. Great for beginners learning digital output and timing.

## Features
- Basic LED on/off control
- Uses Arduino digital pin
- Demonstrates timing with `delay()`
- Breadboard wiring practice

## Components Used
- Arduino Uno
- Breadboard
- 1 LED
- 220Ω resistor
- Jumper wires
- USB cable

## Circuit Diagram
(![Screenshot_20251113-170613_Gallery](https://github.com/user-attachments/assets/324044cd-7dc9-4473-b559-5956a6a8890d)
)
`![Circuit diagram](images/circuit.jpg)`

🎬 Demo Video
Watch the project in action on YouTube: 
![Watch the demo on YouTube](https://img.youtube.com/vi/1WhDdfirVt0/hqdefault.jpg) 
[click here](https://youtu.be/1WhDdfirVt0?si=ywUGI5Fk0u5Lfw2r)
This video demonstrates the LED blink project running on a breadboard using an Arduino uno.

## Code
```cpp
int ledPin = 5;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);
}
(...)


How It Works

1. LED is connected to a digital pin through a resistor.


2. The Arduino sets the pin HIGH → LED ON.


3. After 1 second it sets the pin LOW → LED OFF.


4. The loop repeats.



Setup Instructions

1. Build circuit on breadboard (connect LED → resistor → pin 13 → GND).


2. Connect Arduino to your computer.


3. Open Arduino IDE, paste/upload the code to the board.


4. Observe the LED blinking.



Future Improvements

Add multiple LEDs and patterns

Control via button for speed

Add adjustable PWM brightness


Author

Angelo — Mechanical Engineering Student | Arduino and Robotics Enthusiast
