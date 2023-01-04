#define led 13
void setup()
{
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}



void loop() 
{
  Serial.println("Led Yaniyor");
  digitalWrite(led, HIGH);
  delay(1000);
  Serial.println("Led Söndü");
  digitalWrite(led, LOW);
  delay(1000);
}