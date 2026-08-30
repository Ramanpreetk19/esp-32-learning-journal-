int redPin=27;
int potPin=32;
int potVal;
int writeVal;
int waitT=100;
int bdr=115200;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(bdr);
  pinMode(potPin,INPUT);
  pinMode(redPin,OUTPUT);
  }
void loop() {
  // put your main code here, to run repeatedly:
  potVal=analogRead(potPin);
  //writeVal=(3.3/4095.0)*potVal; linear voltage mapping (not suitable for PWM/LED brightness
  writeVal=pow(2,potVal/511.875)-1; //exponential scaling for perceived-linear dimming (0-4095 -> 0-255)
  analogWrite(redPin,writeVal);
  Serial.print(potVal);
  Serial.print("     ");
  Serial.println(writeVal);
}
