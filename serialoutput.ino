

int howManyTimes = 0;

void setup() {

  Serial.begin(9600);

}


void loop() {
  detectSignal();

}

void detectSignal(){


  int howManyTimes = 0;
  while(analogRead(A1)==0.00){
  
    howManyTimes++;
    delay(10);
  }
  Serial.println("It happened:"+String(howManyTimes));
  if(howManyTimes>3 && howManyTimes<=40){//adjust values if needed
    channel8();
    howManyTimes = 0;
    delay(1000);
  }else if(howManyTimes >40 && howManyTimes <=100){//adjust values if needed
    channel9();
    howManyTimes = 0;
    delay(1000);
  }
  
}

void channel8(){//edit this to your needs
  Serial.println("Channel 8");
}
void channel9(){//edit this to your needs
  Serial.println("Channel 9");
}
