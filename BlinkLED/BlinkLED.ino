void setup() {
  // put your setup code here, to run once:
pinMode(5,OUTPUT); //initialise pin 5 as output

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(5, HIGH); //set led on
delay(100);// delay led on  for 1s
digitalWrite(5, LOW);
delay(100); // delay led of for 1s
}
