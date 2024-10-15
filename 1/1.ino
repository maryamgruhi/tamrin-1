int Led=13;
void setup() {
    // put your setup code here, to run once:
pinMode(Led,OUTPUT);
}
Void loop() {
   // put your main code here, to run repeatedly:
digitalWrite(Led,HIGH);
delay(3000);
digitalWrite(Led,LOW);
delay(1000);
