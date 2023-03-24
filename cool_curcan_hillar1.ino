// C++ code
//
void setup(){
Serial.begin (9600);
pinMode(5, OUTPUT);
pinMode(6, INPUT);
pinMode(7, OUTPUT);
}
void loop(){
long duration, distance;
digitalWrite(9, LOW);
delayMicroseconds(2);
digitalWrite(7, HIGH);
delayMicroseconds(10);
digitalWrite(9, LOW);
duration = pulseIn(7, HIGH);
distance = duration * 0.034 / 2;
Serial.print("Distance: ");
Serial.println(distance);
if (distance <= 10) { 
digitalWrite(7, HIGH);
delay(50);
digitalWrite(7, LOW);
delay(50);
}else{
digitalWrite(9, LOW);