#include<Servo.h>
Servo s1;
int pos =0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  s1.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
  int lt=analogRead(A0);
  
  Serial.println(lt);
  if(lt<20)
  s1.write(50);
  else 
  s1.write(0);
  
  
}
