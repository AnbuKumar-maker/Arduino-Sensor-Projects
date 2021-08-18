void setup()
{
    pinMode(6, OUTPUT);
    pinMode(5, INPUT);
    pinMode(7, INPUT);
}
 
void loop()
{
 
    if (digitalRead(5)==HIGH)
    {
        digitalWrite(6, HIGH);
        delay(100);
        digitalWrite(6, LOW);
    }
 
    if (digitalRead(7)==HIGH)
    {
        digitalWrite(1, HIGH);
        delay(200);
        digitalWrite(6, LOW);
    }
 
}
