int potPin=32;
int potVal;
int waitT=1000;
int bdr=115200;
float volts;
void setup() {
  // put your setup code here, to run once:
pinMode(potPin,INPUT);
Serial.begin(bdr);
}
void loop() {
  // put your main code here, to run repeatedly:
potVal=analogRead(potPin);
volts=(3.3/4095.0)*potVal;
Serial.print("potVal: ");
Serial.print(potVal);
Serial.print("   Voltage:  ");
Serial.println(volts);
delay(waitT);
}
