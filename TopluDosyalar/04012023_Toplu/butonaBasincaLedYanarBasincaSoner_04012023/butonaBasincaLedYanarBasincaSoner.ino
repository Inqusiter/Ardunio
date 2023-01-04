#define buton 9
#define led 8
boolean durum=HIGH;
void setup()
{
  pinMode(led,OUTPUT);
  pinMode(buton,INPUT);
  Serial.begin(9600);
  digitalWrite(led,HIGH);
}



void loop() 
{
 if (digitalRead(buton) == LOW)
 {
  delay(200);
  while(digitalRead(buton)==LOW);
  Serial.println("Buton basildi");
  digitalWrite(led,durum);
  durum=!durum;
 }
 
}