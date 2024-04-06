// C++ code
//
void setup()
{
  pinMode(7, OUTPUT);
}

void loop()
{
  digitalWrite(7,HIGH); //5v turn on
  delay(1000);
  digitalWrite(7,LOW); //0v turn off
  delay(1000);
  
}