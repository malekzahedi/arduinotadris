#define buttonPin 2 
#define ledPin 13 
bool state = LOW; 
  
void setup() { 
pinMode(ledPin, OUTPUT); 
pinMode(buttonPin, INPUT); 
} 
void loop() { 
state = digitalRead(buttonPin); 
if (state == HIGH) { 
digitalWrite(ledPin, HIGH); 
} 
else 
{ 
digitalWrite(ledPin, LOW); 
} 
} 