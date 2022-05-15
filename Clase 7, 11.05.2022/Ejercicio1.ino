int readValue = 0;
int lastValue = 1;
int sensorPin = A0;
int Led_Pin1 = 12;
int Led_Pin2 = 3;
float voltsValue;
float tempValue;

void setup()
{
  Serial.begin(9600);
  pinMode (Led_Pin1, OUTPUT);
  pinMode (Led_Pin2, OUTPUT);
}
void loop()
{
  readValue = analogRead(sensorPin);
    if (lastValue != readValue)
    {
    Serial.print("readValue: ");
    Serial.print(readValue);
    lastValue = readValue;
    voltsValue = 5.0 / 1024 * readValue;
    Serial.print(" -> voltsValue: ");
    Serial.print(voltsValue);
    tempValue = voltsValue * 100 - 50;
    Serial.print(" -> tempValue: ");
    Serial.println(tempValue);
	}
    if (tempValue <= 10)
    {
      digitalWrite(Led_Pin1, HIGH);
      delay(1000);
      digitalWrite(Led_Pin1, LOW);
      delay(1000);
      Serial.print ("Baja temperatura\n");
    }
  	 if (tempValue >= 11)
    {
      digitalWrite(Led_Pin2, HIGH);
      delay(1000);
      digitalWrite(Led_Pin2, LOW);
      delay(1000);
      Serial.print ("Alta temperatura\n");
    }
delay(100);
}