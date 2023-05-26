void setup() {
 pinMode(12, OUTPUT); 
 serial.begin(9600);
}
void loop() {
if(serial.available()>0{
  int x = serial.parseInt();
  if(x==1){
    digitalWrite(input 10,HIGH);
    serial.println("LED OFF");
  }
  if(x==2){
    digitalWrite(input 10,LOW);
    serial.println("LED ON");
  }
}
