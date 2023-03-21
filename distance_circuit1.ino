
int triggerPin = 7;
int echoPin = 6;
unsigned long duration;
int distance;

void setup()
{
  pinMode(triggerPin, OUTPUT);
  pinMode (echoPin, INPUT);
  Serial.begin(9600);
}

void loop()
{
    digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  //clearing the trigger
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  
  // capturing the time duration for sound wave to travel in microseconds
  duration = pulseIn(echoPin, HIGH);
  distance = 0.07723 * duration;
  Serial.print(distance);
  Serial.println("cm");
  
  
}