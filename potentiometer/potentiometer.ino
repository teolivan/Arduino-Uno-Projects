// C++ code
//

int readPIN = A5;
int pinRED = 12;
int pinBLUE = 13;
int sensorValue = 0;
void setup()
{
  pinMode(readPIN, INPUT);
  pinMode(pinRED, OUTPUT);
  pinMode(pinBLUE, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  sensorValue = analogRead(readPIN);
  Serial.println(sensorValue);
  delay(sensorValue);
  digitalWrite(pinRED, HIGH);
  digitalWrite(pinBLUE, HIGH);
  delay(sensorValue);
  digitalWrite(pinRED, LOW);
  digitalWrite(pinBLUE, LOW);
}