//code by Akash Das
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int lt=analogRead(A0);//reading analog values from LDR
  
  Serial.println(lt);//for printing in serial monitor
  
  
  
}
