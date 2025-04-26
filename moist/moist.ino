int water; //random variable 
void setup() {
  pinMode(3,OUTPUT); //output pin for relay board, this will sent signal to the relay
  pinMode(6,INPUT); //input pin coming from soil sensor
}

void loop() { 
  water = digitalRead(6);  /
  if(water == HIGH)  
  {
  digitalWrite(3,LOW); 
  }
  else
  {
  digitalWrite(3,HIGH); 
  }
  delay(2000); 
}
