#define buton 9
#define led 8
boolean durum=HIGH;
int sayac =0;
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
  sayac = sayac +1;
  delay(200);
  while(digitalRead(buton)==LOW);
  Serial.print("Buton basildi ");
  Serial.print(sayac);
  Serial.println(" Kez basıldı");
  digitalWrite(led,durum);
  durum=!durum;
 }
 
}