// C++ code
//analog works with pins that have a squiggly sign, eg 9 and 6
//those pins works as both digital and analog

  int pin = 9;

void setup()
{
  
  pinMode(pin, OUTPUT);
}

void loop()
{
  analogWrite(pin, 50);
  delay(1000);
  analogWrite(pin, 100);
  delay(1000);
  analogWrite(pin, 150);
  delay(1000);
  analogWrite(pin, 200);
  delay(1000);
  analogWrite(pin,250);
  delay(1000);
}