int Led_Pin1 = 12;
int Led_Pin2 = 8;
int Pot_Pin = A0;
int Int_Pin = 6;
int sensorValue = 0;
int inputValue = 0;

void setup()
{
  pinMode(Led_Pin1, OUTPUT);
  pinMode(Int_Pin, INPUT);
  
  pinMode(Led_Pin2, OUTPUT);
  pinMode(Int_Pin, INPUT);
}

void loop()
{
  inputValue = digitalRead(Int_Pin);
  if (inputValue == HIGH)
  {
    digitalWrite(Led_Pin1, 1);
  }
  else
  {
    sensorValue = analogRead(Pot_Pin);
    
    if (sensorValue < 800)
    {
      digitalWrite(Led_Pin1, 1);
    }
    else
    {
      digitalWrite(Led_Pin1, 0);
    }
  }
  
   if (inputValue == HIGH)
  {
    digitalWrite(Led_Pin2, 1);
  }
  else
  {
    sensorValue = analogRead(Pot_Pin);
    
    if (sensorValue < 800)
    {
      digitalWrite(Led_Pin2, 1);
    }
    else
    {
      digitalWrite(Led_Pin2, 0);
    }
  }
}
      