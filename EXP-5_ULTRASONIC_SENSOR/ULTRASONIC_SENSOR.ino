void setup() 
{
  Serial.begin(9600);
  pinMode(9,OUTPUT);
  pinMode(10,INPUT);

}

void loop()
{
  digitalWrite(9,LOW);
  delayMicroseconds(2);
  digitalWrite(9,HIGH);
  delayMicroseconds(10);
  int t=pulseIn(10,HIGH);
  float distance=0.017*t;
  Serial.println(distance);

}
