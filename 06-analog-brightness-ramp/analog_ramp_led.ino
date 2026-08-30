int redPin= 2;
int bright= 0;
int endWait=1500;
void setup() {
  // put your setup code here, to run once:
  pinMode(redPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  bright=bright+25;
  analogWrite(redPin,bright);
  delay(endWait);
}
