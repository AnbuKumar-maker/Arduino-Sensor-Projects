#include <Wire.h>
#include "MMA7660.h"
MMA7660 accelemeter;
void setup() {
    accelemeter.init();
    Serial.begin(9600);
}
void loop() {
    int8_t x;
    int8_t y;
    int8_t z;
    float ax, ay, az;
    accelemeter.getXYZ(&x, &y, &z);

    Serial.print("x = ");
    Serial.println(x);
    Serial.print("y = ");
    Serial.println(y);
    Serial.print("z = ");
    Serial.println(z);

    accelemeter.getAcceleration(&ax, &ay, &az);
    Serial.println("accleration of X/Y/Z: ");
    Serial.print(ax);
    Serial.println(" g");
    Serial.print(ay);
    Serial.println(" g");
    Serial.print(az);
    Serial.println(" g");
    Serial.println("*************");
    delay(500);
}
