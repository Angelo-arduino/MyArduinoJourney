# Sound Trigger Alarm System

## Overview

This Arduino project uses a sound sensor to detect loud noises (e.g., clapping or knocking) and triggers an alarm (buzzer or LED). Useful as a small notification or security demo.

## Features

Detects sound above a threshold

Triggers LED or buzzer

Sensitivity adjustable on the sensor module

Beginner-friendly


## Components Used

Arduino Uno

Sound sensor module (microphone)

Buzzer (or LED)

Breadboard

Jumper wires


## Circuit Diagram


[![20251115_122155](https://github.com/user-attachments/assets/70808d4f-d089-4ac6-9f2f-718c0813f1e9)
](images/sound_wiring.jpg)
## Demo video
Here is a demo video showing how the sound alarm system works:
[watch the demo on Youtube](https://youtu.be/uwdyYTs8sM4?si=OEJ_2Li0mB6KTOao)

## Code
int soundSensor = 2; // KY-037 digital output
int led = 5;        // LED pin
int buzzer = 12;     // Buzzer pin
int soundPin= A0;
int threshold=200;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600); // Optional: monitor sensor state
}

void loop() {
  int soundLevel=analogRead(soundPin);
  Serial.println(soundLevel);

  if (soundLevel>threshold) {  // sound detected
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(500);
    Serial.println("Sound detected!");
  }
    else{
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
  
  }
  }

## How It Works

1. The sound sensor outputs HIGH when noise passes the threshold.


2. Arduino reads the pin and activates the alarm (buzzer or LED).


3. The alarm stays on for a second and then resets.

## Setup Instructions

1. Connect sound sensor VCC → 5V, GND → GND, OUT → digital pin 2.

2. Connect buzzer or LED to pin 13 (through resistor if LED).

3. Upload code and test by clapping or tapping.

## Future Improvements

Add debounce or time window to avoid repeated triggers

Send SMS/email using GSM/Wi-Fi module

Add a small web dashboard for event log

## Author

Gelo — Mechanical Engineering Student | Arduino and Robotics Enthusiast
