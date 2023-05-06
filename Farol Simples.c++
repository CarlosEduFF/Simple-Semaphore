// C++ code
//
int ledpinRed = 8;
int ledpinYel = 4;
int ledpinGre = 2;
void setup()
{
  pinMode(ledpinRed, OUTPUT);
  pinMode(ledpinYel, OUTPUT);
  pinMode(ledpinGre, OUTPUT);
}

void loop()
{
  digitalWrite(ledpinGre, HIGH);
  delay(5000);
  digitalWrite(ledpinGre, LOW);
  digitalWrite(ledpinYel, HIGH);
  delay(2000);
  digitalWrite(ledpinYel, LOW);
  digitalWrite(ledpinRed, HIGH);
  delay(5000); 
  digitalWrite(ledpinRed, LOW);
}

Resistors led green - 100
Resistors led yellow - 140
Resistors led red - 160