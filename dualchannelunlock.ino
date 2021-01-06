// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(0, INPUT); //LED on Model B
  pinMode(1, OUTPUT); //LED on Model A 
  Serial.begin(9600);  
}

// the loop routine runs over and over again forever:
void loop() {
  Serial.println(analogRead(0));
  if(analogRead(0)<500){
    digitalWrite(1,HIGH);
    delay(10);
  }else{
    digitalWrite(1, LOW);
    delay(10);
  }
  
           // wait for a second
}
