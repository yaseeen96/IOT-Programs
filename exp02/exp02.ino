// Count number of persons entering a room IR sensor.

#define IRout 10
#define led 5
int counter = 0;
void setup() {
  pinMode(led, OUTPUT);
  pinMode(IRout, INPUT);
  Serial.begin(9600);
}
void loop() {
  if (digitalRead(IRout) == LOW) {
    digitalWrite(led, HIGH);
    counter++;
    delay(10);
  } else {
    digitalWrite(led, LOW);
    delay(10);
  }
  Serial.println('Total number of persons entered the room', counter);
}

