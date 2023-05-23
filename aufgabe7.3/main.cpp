#include <iostream>
#include <cmath>
#include <b15f/b15f.h>

int main() {
    B15F &drv = B15F::getInstance();

    drv.analogWrite0(0);

    float u = 0.0;

    while (u <= 2) {
        float dacVal = ((u) / (5.0 / 1023.0));
        drv.analogWrite0(dacVal);

        float reading = drv.analogRead(5);

        float readingVolts = reading * (5.0/1023.0);
        float I = (readingVolts) / 1000.0;

        std::cout << u - readingVolts << "\t"<< I << std::endl;

        u += 0.05;
    }

    drv.analogWrite0(0);

}
