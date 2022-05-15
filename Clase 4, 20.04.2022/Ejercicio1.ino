int Led_Pin1 = 11;
int Led_Pin2 = 6;
int Led_Pin3 = 3;
int Led_Pin4 = 2;
int Pot_Pin = A0;
int sensorValue = 0;
int outputValue = 0;

void setup()
{
  pinMode(Led_Pin1, OUTPUT);
  pinMode(Led_Pin2, OUTPUT);
  pinMode(Led_Pin3, OUTPUT);
  pinMode(Led_Pin4, OUTPUT);
  Test_Led();
}

void loop()
{
  sensorValue = analogRead(Pot_Pin);
  outputValue = map(sensorValue, 0, 1023, 0, 255);
  analogWrite(Led_Pin1, outputValue);
  
  sensorValue = analogRead(Pot_Pin);
  outputValue = map(sensorValue, 0, 1023, 0, 255);
  analogWrite(Led_Pin2, outputValue);
  
  sensorValue = analogRead(Pot_Pin);
  outputValue = map(sensorValue, 0, 1023, 0, 255);
  analogWrite(Led_Pin3, outputValue);
  
  sensorValue = analogRead(Pot_Pin);
  outputValue = map(sensorValue, 0, 1023, 0, 255);
  analogWrite(Led_Pin4, outputValue);
}

void Test_Led()
{
  digitalWrite(Led_Pin1, HIGH);
  delay(1000);
  digitalWrite(Led_Pin1, LOW);
  delay(1000);
  digitalWrite(Led_Pin2, HIGH);
  delay(1000);
  digitalWrite(Led_Pin2, LOW);
  delay(1000);
  digitalWrite(Led_Pin3, HIGH);
  delay(1000);
  digitalWrite(Led_Pin3, LOW);
  delay(1000);
  digitalWrite(Led_Pin4, HIGH);
  delay(1000);
  digitalWrite(Led_Pin4, LOW);
  delay(1000);
}
  