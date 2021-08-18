#include <Grove_LED_Bar.h>
 
#define Grove_LED_Bar bar(3, 2, 0);  // Clock pin, Data pin, Orientation
 
void setup()
{
  // nothing to initialize
  bar.begin();
  bar.setGreenToRed(true);
}
 
void loop()
{
 
  int value = analogRead(A0);
  value = map(value, 0, 800, 0, 10);
 
  bar.setLevel(value);
  delay(100);
}
