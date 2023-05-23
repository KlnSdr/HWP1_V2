#include <iostream>
#include <cmath>
#include <b15f/b15f.h>

float toVolts(float reading) {
    return reading * (5.0/1023.0);
}

int main() {
    B15F &drv = B15F::getInstance();
    
    float us[4] = {1.0, 2.0, 3.0, 4.0};

    for (int j = 0; j < 4; j++) {

	std::cout << "===" << us[j] << "===" << std::endl;

		drv.analogWrite0(us[j] / (5.0 / 1023.0));
        float i = 0;

		while (i <= 5) {
            drv.analogWrite1(i / (5.0 / 1023.0));

            float a0 = drv.analogRead(0);
            float a1 = drv.analogRead(1);
            float a2 = drv.analogRead(2);
            float a3 = drv.analogRead(3);
            float I = ((toVolts(a0)-toVolts(a1))/68.0) * 1000.0; // mA
            
            std::cout << I << std::endl;
            i += 0.25;
        }
    }

    drv.analogWrite0(0);
    drv.analogWrite1(0);
}
