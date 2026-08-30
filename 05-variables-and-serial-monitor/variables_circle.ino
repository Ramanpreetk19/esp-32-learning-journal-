//int x;
//int y;
//int z;
float myPi = 3.14;
float myRadius = 2;
float myArea;
String mess1= " A Circle of Radius ";
String mess2= " has an area of ";
int waitT=1000;
//String countMess="Your Counter Is : ";String op = "  +  ";String eq = " = ";

void setup() {
  // put your setup code here, to run once:
 Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:x=3; y=7; z=x+y;
  //Serial.print(x);Serial.print(op);Serial.print(y);Serial.print(eq);Serial.println(z);
   myArea=myPi*myRadius*myRadius;
   Serial.print(mess1);
   Serial.print(myRadius);
   Serial.print(mess2);
   Serial.println(myArea);
   delay(waitT);

   myRadius=myRadius+.1;
}
