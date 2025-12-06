
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

