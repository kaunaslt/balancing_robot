void move(int motor, double speed){
//Move specific motor at speed(-255;255)
//motor: 0 for B; 1 for A;
//speed: 0 is off, and 255 or -255 is full speed
  digitalWrite(STBY, HIGH); //disable standby
  boolean inPin1 = LOW;
  boolean inPin2 = HIGH;
  if(speed < 0){
    inPin1 = HIGH;
    inPin2 = LOW;
  }
  
  if(motor == 1){
    digitalWrite(AIN1, inPin1);
    digitalWrite(AIN2, inPin2);
    analogWrite(PWMA, abs(speed));
  }else{
    digitalWrite(BIN1, inPin1);
    digitalWrite(BIN2, inPin2);
    analogWrite(PWMB, abs(speed));
  }
}
void stop(){
//enable standby  
  digitalWrite(STBY, LOW); 
}
