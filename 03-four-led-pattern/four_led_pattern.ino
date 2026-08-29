void setup() {
  // put your setup code here, to run once:
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(18,OUTPUT);
  pinMode(19,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(4,HIGH);
  digitalWrite(18,HIGH);
  delay(5000);
  
  digitalWrite(4,LOW);
  digitalWrite(18,LOW);
  delay(2500);

  digitalWrite(5,HIGH);
  digitalWrite(19,HIGH);
  delay(1000);
  
   digitalWrite(5,LOW);
  digitalWrite(19,LOW);
  delay(2500);
  }
