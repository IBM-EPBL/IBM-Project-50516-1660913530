int status = 0;
void setup()
{
pinMode(9, OUTPUT);
pinMode(A2, INPUT);
}
void loop()
{
status = digitalRead(A2);
if(status == HIGH)
{
digitalWrite(9, HIGH);
}
if(status == LOW)
{
digitalWrite(9, LOW);
}
delay(2000);
}
