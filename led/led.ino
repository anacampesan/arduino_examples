/*
 * Traffic Lights + Buzzer
 * by Ana Raquel Campesan (@anazard)
 * 
 * 
 */

int led[3];
int buzzer = 9;
int lightSensor = 0;
int sensorValue;
int i;

void setup() {
  // put your setup code here, to run once:
  for(i=5;i<8;i++)
  {
    led[i-5] = i;
    pinMode(i, OUTPUT);
  }
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  sensorValue = analogRead(lightSensor);
  Serial.println(sensorValue);
  if (sensorValue < 400)
  {
    //tone(buzzer, 31, 1000);
  }
  
  for(i=0;i<3;i++)
  {
    digitalWrite(led[i], HIGH);
    delay(1000);
    digitalWrite(led[i], LOW);
    delay(1000);
  }
}
