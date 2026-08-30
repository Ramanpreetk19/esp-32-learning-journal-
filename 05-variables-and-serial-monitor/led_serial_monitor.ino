int redPin=2;
int wait=2000;
String mess1=" Your LED is ON ";
String mess2=" Your LED is OFF ";
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(redPin,OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(redPin,HIGH);
Serial.println(mess1);
delay(wait);

digitalWrite(redPin,LOW);
Serial.println(mess2);
delay(wait);
}
