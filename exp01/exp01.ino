// LED ON/ OFF with some time interval with buzzer ON/OFF..

#define LED 10
#define BUZZER 5
void setup() {

  pinMode(LED, OUTPUT);
  pinMode(BUZZER, OUTPUT);
  Serial.begin(9600);
  Serial.println("LED ON/OFF SYSTEM");

}

void loop() {

  Serial.println("LED is on now");
  digitalWrite(LED, HIGH);
  digitalWrite(BUZZER, HIGH);
  delay(2000);
  Serial.println("LED is OFF NOW");
  digitalWrite(LED, LOW);
  digitalWrite(BUZZER, LOW);
  delay(2000);

}
