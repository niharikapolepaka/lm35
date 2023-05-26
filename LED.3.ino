void setup() {
  pinMode(5,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(11,OUTPUT);
Serial.begin(9600);
}
void loop() {
  if(Serial.available()>0) {
    int x = Serial.parseInt();
    if(x==1) {
      Serial.println("LED_1,ON");
      digitalWrite(5,HIGH);
      digitalWrite(8,LOW);
      digitalWrite(11,LOW);
    }
    if(x==2) {
      Serial.println("LED_1,OFF");
      digitalWrite(8,HIGH);
      digitalWrite(5,LOW);
      digitalWrite(11,LOW);
    }
    if(x==3) {
      Serial.println("LED_2,ON");
      digitalWrite(11,HIGH);
      digitalWrite(8,LOW);
      digitalWrite(5,LOW);
    }
  }

}
