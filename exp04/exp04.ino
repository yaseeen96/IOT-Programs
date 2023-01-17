// Measure moisture in soil and use suitable LEDs to indicate the moisture levels like below and above required level.

#define sensorPin A0
#define led 13
#define limit 40


void setup() {

  Serial.begin(9600);
  pinMode(led, OUTPUT);
}


void loop() {
  int sensorValue = analogRead(sensorPin);
  Serial.println("Analog Value : ");
  Serial.println(sensorValue);
  if (sensorValue < limit) {
    digitalWrite(led, HIGH);

  } else {

    digitalWrite(led, LOW);
  }
  delay(1000);
}
