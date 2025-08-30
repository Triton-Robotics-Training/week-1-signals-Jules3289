//STARTER 
//THIS EXERCISE IS TO BE DONE IN THE ARM MBED SIMULATOR
//http://195.130.59.221/
//IF YOU HAVE ISSUES WITH THE SIMULATOR, CONTACT EMBEDDED LEAD
#include "mbed.h"

AnalogIn potentiometer(p16);
DigitalOut led(LED1);

int main() {
    while (1) {
        printf("Week 1 Exercise 2");

        double x = potentiometer.read();
        printf("poten is now %f\n", x);
        
        int on_time = x*2000;
        int off_time = 2000 - on_time;
        
        if (on_time >= 0) {
            led = 1;
            wait_ms(on_time);
        }
        
        if (off_time >= 0) {
            led = 0;
            wait_ms(off_time);
        }
        // MAKE SURE THERE IS ALWAYS A WAIT ON THE SIM OR IT WILL CRASH
        //wait_ms(500); 
    }
}
