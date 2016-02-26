int buzzer = 9;
const int cricketSound = 31;
int i;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(i=0; i<2; i++)
  {
    tone(buzzer, cricketSound, 200);
    delay(300);
  }

  delay(2000);
  
}
