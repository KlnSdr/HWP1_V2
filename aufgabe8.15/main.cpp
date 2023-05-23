#include <iostream>
#include <cmath>
#include <b15f/b15f.h>

float toVolts(float reading) {
    return reading * (5.0/1023.0);
}

int main() {
    B15F &drv = B15F::getInstance();

    drv.digitalWrite0(0);
    drv.digitalWrite1(0);
    drv.delay_ms(10);
    int inBE0 = drv.digitalRead0();
    int inBE1 = drv.digitalRead1();

    std::cout << "00 -> " << (inBE0 == 1 ? true : false) << "|" << (inBE1 == 1 ? true : false) << std::endl;

    drv.digitalWrite0(1);
    drv.digitalWrite1(0);
    drv.delay_ms(10);
    inBE0 = drv.digitalRead0();
    inBE1 = drv.digitalRead1();

    std::cout << "10 -> " << (inBE0 == 1 ? true : false) << "|" << (inBE1 == 1 ? true : false) << std::endl;

    drv.digitalWrite0(0);
    drv.digitalWrite1(1);
    drv.delay_ms(10);
    inBE0 = drv.digitalRead0();
    inBE1 = drv.digitalRead1();

    std::cout << "01 -> " << (inBE0 == 1 ? true : false) << "|" << (inBE1 == 1 ? true : false) << std::endl;

    drv.digitalWrite0(1);
    drv.digitalWrite1(1);
    drv.delay_ms(10);
    inBE0 = drv.digitalRead0();
    inBE1 = drv.digitalRead1();

    std::cout << "11 -> " << (inBE0 == 1 ? true : false) << "|" << (inBE1 == 1 ? true : false) << std::endl;

    drv.digitalWrite0(0);
    drv.digitalWrite1(0);
}
