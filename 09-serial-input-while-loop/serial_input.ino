int myInt;
float myFloat;
int bdr=115200;
String myName; 
void setup() {
  // put your setup code here, to run once:
Serial.begin(bdr);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println("What Is Your Number:  ");
while (Serial.available()==0){
}
myInt=Serial.parseInt();
Serial.print("Your Number Is :  ");
Serial.println(myInt);


Serial.println("Please Input a Float : ");
while (Serial.available()==0){

}
myFloat=Serial.parseFloat();
Serial.print("Your Float Is: ");
Serial.println(myFloat);

Serial.println("What Is Your Name? ");
while(Serial.available()==0){
}
myName=Serial.readString();
Serial.print("Hello,");
Serial.print(myName);
Serial.println(". Welcome to ESP32!");
}
