#include <iostream>
#include <cmath>
#include <b15f/b15f.h>

int main() {
    B15F &drv = B15F::getInstance();

    drv.analogWrite0(0);

    float u = 0.0;

    while (u <= 5.0) {
        float dacVal = u / (5.0 / 1023.0);
        drv.analogWrite0(dacVal);
        drv.delay_ms(100);

        float reading = drv.analogRead(0);

        float readingVolts = reading * (5.0/1023.0);
        float I = (u - readingVolts) / 1000.0;

        std::cout << u << "\t"<< I << std::endl;

        u += 0.25;
    }

    drv.analogWrite0(0);

}
