int LDR=A0;
int LDRValue=0;
int light_sensitivity=400;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  LDRValue=analogRead(LDR);
  Serial.println(LDRValue);
  delay(50);
  if(LDRValue < light_sensitivity)
  {
    digitalWrite(13,HIGH);
  }
  else
  {
    digitalWrite(13,LOW);
  }
  delay(1000);
}
