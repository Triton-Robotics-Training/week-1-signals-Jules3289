//STARTER 
//THIS EXERCISE IS TO BE DONE IN THE ARM MBED SIMULATOR
//http://195.130.59.221/
//IF YOU HAVE ISSUES WITH THE SIMULATOR, CONTACT EMBEDDED LEAD
#include "mbed.h"

DigitalIn button(BUTTON1);
DigitalOut led(LED1);

int main() {
    while (1) {
        printf("Week 1 Exercise 1");

        int x = button;
        if (x==1){
            led = 1;
        }
        else {
            led = 0;
        }
        // MAKE SURE THERE IS ALWAYS A WAIT ON THE SIM OR IT WILL CRASH
        wait_ms(500); 
    }
}
