int ledPin = 2;
void setup() {
  // put your setup code here, to run once:
    pinMode(ledPin, OUTPUT);
    Serial.begin(115200);
}
void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(ledPin, HIGH);
  Serial.print("Hello ");
  delay(500);
  digitalWrite(ledPin, LOW);
  Serial.println("World!");
  delay(500);
}
