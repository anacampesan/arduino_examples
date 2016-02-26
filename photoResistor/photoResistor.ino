int lightPin = 0;
int ledPin = 10;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(analogRead(lightPin));
  delay(10);
}
