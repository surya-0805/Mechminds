int water;

void setup() 
{
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(6, INPUT);
}

void loop() 
{ 
  water = digitalRead(6);

  if(water == HIGH)
  {
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  }
  else
  {
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    delay(3000);
    digitalWrite(4, LOW);
  }

  delay(1000);
}
