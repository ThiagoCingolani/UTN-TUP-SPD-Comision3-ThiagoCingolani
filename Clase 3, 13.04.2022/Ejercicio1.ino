int buttonState = 0;

void setup()
{
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  buttonState = digitalRead(2);
    if (buttonState == HIGH)
    {   
    digitalWrite(3, LOW);
    digitalWrite(8, LOW);
    digitalWrite(13, HIGH);
    delay(1000);
      
    digitalWrite(3, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(13, LOW);
    delay(1000);
      
    digitalWrite(3, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(13, LOW);
    delay(1000);
      
    } else{
      digitalWrite(3, LOW);
      digitalWrite(8, LOW);
      digitalWrite(13, LOW);
    }
}