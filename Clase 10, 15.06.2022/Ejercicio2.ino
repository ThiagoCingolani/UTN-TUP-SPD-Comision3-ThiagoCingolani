#include <LiquidCrystal.h>

int lectura = 0;
int distancia = 0;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int contador = 0;

void setup()
{
  Serial.begin(9600);
  Serial.println("Iniciando");
  
  lcd.begin(16, 2);
  lcd.print("Iniciando");
  lcd.setCursor(0, 1);
  lcd.print("Sistema");
  delay(1000);
  
  lcd.clear();
  delay(1000);
  lcd.print("Iniciando");
  lcd.setCursor(0, 1);
  lcd.print("Sistema");
  delay(1000);
  lcd.clear();
  lcd.print("Calculando");
  lcd.setCursor(0, 1);
  lcd.print("Sensor:");
}

void loop()
{
  lectura = readUltrasonicDistance(7, 7);
  distancia = 0.01723 * lectura;

  Serial.print(distancia);
  Serial.println("cm");
  delay(100);
  
  lcd.setCursor(7, 1);
  lcd.print(distancia);
  delay(1000);
}

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);

  pinMode(echoPin, INPUT);

  return pulseIn(echoPin, HIGH);
}