#include <iostream>
#include <cmath>
#include <b15f/b15f.h>
#include <unistd.h>

float toVolts(float reading) {
    return reading * (5.0/1023.0);
}

float fromVolts(float target) {
    return target / (5.0/1023.0);
}

int main() {
    B15F &drv = B15F::getInstance();
	
	drv.analogWrite0(fromVolts(5.0));
	
	float val = 0.0;
	while (true) {
        val = val == 0.0 ? 5.0 : 0.0;
		drv.analogWrite1(fromVolts(val));

        float a0 = drv.analogRead(0);
        float a1 = drv.analogRead(1);
        float I = (toVolts(a0)-toVolts(a1))/68;
	}
	return 0;
}
