
void setup()
{
  Serial.begin(9600);
}
void loop()
{
  int y=analogRead(A0);
  int t=map(y,0,1032,0,2550);
  Serial.println(t);
  delay(200);
}