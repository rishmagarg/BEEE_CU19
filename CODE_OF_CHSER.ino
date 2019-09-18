void setup() {
  pinMode(13,OUTPUT); 
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(130,OUTPUT);

}

void loop() {
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  delay(500);
  digitalWrite(10,LOW);
  digitalWrite(12,HIGH);
  delay(500);
   digitalWrite(11,LOW);
  digitalWrite(13,HIGH);
  delay(500);
  digitalWrite(12,LOW);
  delay(500);
  
}
