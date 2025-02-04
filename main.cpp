#include "mbed.h"
#include "arm_book_lib.h"

#define DUTY_CW 0.065
#define DUTY_CCW 0.085
#define DUTY_STOP 0.075
#define PERIOD 0.02 //Units of period is seconds

PwmOut servo(PF_9); //Here is where we declare the object

int main()
{
servo.period(PERIOD); // 20ms period
servo.write(DUTY_STOP); // 2.5% duty cycle
    while(true){
        servo.write(DUTY_CW);
        delay(2000);
        servo.write(DUTY_STOP);
        delay(3000);
        servo.write(DUTY_CCW);
        delay(2000);
        servo.write(DUTY_STOP);
        delay(3000);
    }
}
