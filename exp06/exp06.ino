// Make to glow three different color LEDs by switching through Relays

int Relaypin1 = 3;  // Define input pin for relay
int Relaypin2 = 4;  // Define input pin for relay
int Relaypin3 = 5;  // Define input pin for relay

void setup() {
  // put your setup code here, to run once:
  pinMode(Relaypin1, OUTPUT);  // Define the Relaypin1 as output pin
  pinMode(Relaypin2, OUTPUT);  // Define the Relaypin2 as output pin
  pinMode(Relaypin3, OUTPUT);  // Define the Relaypin3 as output pin
}

void loop() {
  digitalWrite(Relaypin1, HIGH);  // Sends high signal
  delay(1000);                    // Waits for 1 second
  digitalWrite(Relaypin1, LOW);   // Makes the signal low
  delay(1000);                    // Waits for 1 second

  digitalWrite(Relaypin2, HIGH);  // Sends high signal
  delay(1000);                    // Waits for 1 second
  digitalWrite(Relaypin2, LOW);   // Makes the signal low
  delay(1000);                    // Waits for 1 second

  digitalWrite(Relaypin3, HIGH);  // Sends high signal
  delay(1000);                    // Waits for 1 second
  digitalWrite(Relaypin3, LOW);   // Makes the signal low
  delay(1000);                    // Waits for 1 second
}
