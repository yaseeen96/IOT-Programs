// Detect Gas leakage and enable alarm on detection of leakage of gas.

int GAS_VAL = 0;
void setup()
{
  pinMode(A0, INPUT); // MQ-6 A0 Pin
  Serial.begin(9600);
  pinMode(11,OUTPUT); // LED Green
  pinMode(12,OUTPUT); // LED Red
}

void loop()
{
  GAS_VAL = analogRead(A0);
  Serial.println(GAS_VAL);

 if (GAS_VAL > 500)
 {
    
    Serial.println("  LPG Detected    ");
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
  }
  
  else
 {
     Serial.println("LPG Not Detected    ");
     digitalWrite(11,LOW);
     digitalWrite(12,HIGH);
  }
  
  delay(10); 
}
