/*connect Tx and Rx in default port 1,0 at arduino*/

char Incoming_value = 0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0)
    {
      Incoming_value = Serial.read();
      Serial.print(Incoming_value);
      Serial.print("/n");
      if (Incoming_value == '1')
      {
        digitalWrite(13,HIGH);
        Serial.println("Led is on");
      }
      else if(Incoming_value == '0')
      {
        digitalWrite(13,LOW);
        Serial.println("Led is off");    
    }
}
}
