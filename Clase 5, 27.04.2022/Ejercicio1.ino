int Led_Pin1 = 7;
int Led_Pin2 = 2;
int Fot_Pin = A0;
int sensorValue = 0;
int outputValue = 0;

void setup()
{
  Serial.begin (9600);
  pinMode (Led_Pin1, outputValue);
  pinMode (Led_Pin2, outputValue);
}

void loop()
{
  digitalWrite (Led_Pin1, HIGH);
  sensorValue = analogRead (Fot_Pin);
  outputValue = map (sensorValue, 0, 1023, 0, 255);
  analogWrite (Led_Pin1, outputValue);
  Serial.print ("Lectura: ");
  Serial.println (sensorValue);
  Serial.print ("Mapeado: ");
  Serial.println (outputValue);
  delay (250);
  digitalWrite (Led_Pin1, LOW);
  delay (250);
  
  digitalWrite (Led_Pin2, HIGH);
  sensorValue = analogRead (Fot_Pin);
  outputValue = map (sensorValue, 0, 1023, 0, 255);
  analogWrite (Led_Pin2, outputValue);
  Serial.print ("Lectura: ");
  Serial.println (sensorValue);
  Serial.print ("Mapeado: ");
  Serial.println (outputValue);
  delay (250);
  digitalWrite (Led_Pin2, LOW);
  delay (250);
}