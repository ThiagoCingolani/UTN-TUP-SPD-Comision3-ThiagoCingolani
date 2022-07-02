#include <IRremote.h>

int RECV_PIN = 14;
int IRData = 0;
int Led_Pin = 9;

IRrecv irrecv(RECV_PIN);
decode_results results;

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn();
  pinMode(Led_Pin, OUTPUT);
}

void loop()
{
  if (irrecv.decode(&results))
  {
    IRData = results.value;
    irrecv.resume();
    Serial.print("Datos: ");
    Serial.print(IRData, HEX);
    Serial.print(" {");
    Serial.print(IRData);
    Serial.println("}");
    
    digitalWrite(Led_Pin, HIGH);
    delay(1000);
    digitalWrite(Led_Pin, LOW);
    delay(1000);
  }
}