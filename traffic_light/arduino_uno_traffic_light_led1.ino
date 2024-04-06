// C++ code
//
void setup()
{
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);

}

void loop()
{
  //greeb 
  digitalWrite(7,HIGH); //5v turn on
  delay(1000);
  digitalWrite(7,LOW); //0v turn off
  delay(1000);
  
  //yellow
  digitalWrite(6,HIGH); //5v turn on
  delay(1000);
  digitalWrite(6,LOW); //0v turn off
  delay(1000);
  
  //red
  digitalWrite(5,HIGH); //5v turn on
  delay(1000);
  digitalWrite(5,LOW); //0v turn off
  delay(1000);
  
  
}