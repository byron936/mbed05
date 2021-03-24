#include "mbed.h"

#include "TextLCD.h"




TextLCD lcd(D2, D3, D4, D5, D6, D7);


int main()

{

      int x=30;

      lcd.printf("108060034\n");

      while(true)

      {

            lcd.locate(5,1);

            lcd.printf("%5i",x);    //counter display

            ThisThread::sleep_for(1s);

            x--;
            if (x < 0)  break;

      }
      ThisThread::sleep_for(30s);
}