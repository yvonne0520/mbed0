#include "mbed.h"

DigitalOut redLED(LED_RED);
DigitalOut greenLED(LED_GREEN);

int Led_R(DigitalOut& ledpin);
int Led_G(DigitalOut& ledpin);

int main()
{
   redLED = 1;
   greenLED = 1;
   while (true) {
       Led_R(redLED);
       Led_G(greenLED);
   }
}