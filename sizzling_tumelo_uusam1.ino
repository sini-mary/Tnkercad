// C++ code
//
void setup
{
  pinMode(tmp, INPUT);
  pinMode(Indicator, OUTPUT);
  mainservo.attach(5);
  Serial.begin(9600);
  
}

void loop()
{
  int tempreading=analogRead(temperature);
  float voltage= tempreading;
  voltage/= 1030.0;
  int position= map(tempC, 30, 90);
  Serial.position(
  
}