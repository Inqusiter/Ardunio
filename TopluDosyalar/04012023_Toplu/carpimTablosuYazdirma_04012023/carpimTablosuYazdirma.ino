#define led 13
void setup()
{
  Serial.begin(9600);
}



void loop() 
{
  for(int i=1;i<11;i++)
  {
    Serial.print("******************* ");
    Serial.print(i);
    Serial.println(" ler ******************* ");
     for(int j=1;j<11;j++)
     {
     Serial.print(i);
     Serial.print("x");
     Serial.print(j);
     Serial.print("=");
     Serial.println(i*j);
     delay(500);
     }
     delay(1000);
  }

delay(1000);
}