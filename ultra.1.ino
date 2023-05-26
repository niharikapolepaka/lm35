const int TRIG_PIN = 2;
const int ECHO_PIN = 5;
const int LED_PIN = 8;
const int DISTANCE_THRESHOLD = 20;
float time_us, distance_cm;
void setup() {
 Serial.begin(9600);
 pinMode(TRIG_PIN , OUTPUT);
 pinMode(ECHO_PIN , INPUT);
 pinMode(LED_PIN , OUTPUT);
}
void loop() {
  digitalWrite(TRIG_PIN , HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN , LOW);
  time_us = pulseIn (ECHO_PIN , HIGH);
  distance_cm = 0.017 * time_us;
  if(distance_cm < DISTANCE_THRESHOLD) {
  digitalWrite(LED_PIN , HIGH); 
  }
  else{
  digitalWrite(LED_PIN , LOW);
  }
  Serial.println("distance: ");
  Serial.println("distance_cm");
  Serial.println("cm");
  delay(500); 
}
