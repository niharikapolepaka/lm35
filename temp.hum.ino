#include <DHT.h>
#include <DHT_U.h>
#define outpin 8
#define ledpin 13
DHT DHT_U(8, DHT11);
void setup() {
  Serial.begin(9600);
  pinMode(ledpin,OUTPUT);
}
void loop() {
  delay(2000);
  DHT_U.read();
  float t = DHT_U.readTemperature();
  float h = DHT_U.readHumidity();
  Serial.print("Temperature = ");
  Serial.print(t);
  Serial.print("C |  ");
  Serial.print(t * 9.0 / 5.0 + 32.0);
  Serial.print("F ");
  Serial.println("Humidity = ");
  Serial.print(h);
  Serial.print("% ");
  Serial.print(" ");
  if (t < 25.0) {
    digitalWrite(ledpin, HIGH);
    delay(500);
    digitalWrite(ledpin, LOW);
    delay(500);
  }else { 
    digitalWrite(ledpin, LOW);
    delay(1000);
  }
}
