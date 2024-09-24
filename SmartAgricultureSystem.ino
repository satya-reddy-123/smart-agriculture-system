const int MotorPin =13, SensorPin = A5;
void setup() 
{
  Serial.begin(9600);
  pinMode(MotorPin , OUTPUT);
}
void loop()
{
  int SensorValue = analogRead(SensorPin);
  float voltage = SensorValue * (5.0/1023.0);
  if (voltage >= 2.5)
  {
    digitalWrite (MotorPin, LOW);

  }
  else
  {
    digitalWrite(MotorPin, HIGH);

  }
  Serial.print("moisture level:");
  Serial.println(voltage);

  delay(10);
}
