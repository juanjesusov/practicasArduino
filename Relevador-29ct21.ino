
const int RELEPin = 2;
void setup()
{
 pinMode(RELEPin, OUTPUT);
}
void loop()
{
 digitalWrite(RELEPin, LOW);
 delay(1000);
 digitalWrite(RELEPin, HIGH);
 delay(1000);
 }
 
