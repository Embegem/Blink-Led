int led =13,i; // normally arduino has an inbuilt led which is connected to pin number 13. So declaring a variablenamed LED 
void setup() {
  pinMode(led,OUTPUT);// Defining led(pin 13) as output 
}

void loop() {
  for(i=0;i<5;i++){ // making led blink for 10 seconds
  digitalWrite(led,HIGH);// making led pin as high
  delay(1000);
  digitalWrite(led,LOW);// making led pin as low 
  delay(1000);}
  
for(i=0;i<5;i++){ // making led blink faster
  digitalWrite(led,HIGH);// making led pin as high
  delay(100);
  digitalWrite(led,LOW);// making led pin as low 
  delay(100);}
}

// note: You can connect led to any pin(2-13) and declare them as output. but if you do not have an led you can just use in-built led
//now build your own led blink and do comment
