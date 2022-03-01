Rear bicycle light:  #include <DMD2.h>
SoftDMD dmd(1, 1);

void setup() {
  dmd.begin();
}


int n = 2;
void(* resetFunc)(void) = 0;
void loop() {
  int value = analogRead(A1);
  // Master button..
    if (value > 800 && value < 1000) {
      dmd.drawFilledBox(10, 0, 21, 15);
      delay(5000);
      resetFunc();
    }
    
Saddle and brakes:
  /*
 * showmsg_single_static function takes two arguments
 * first argument can be an integer value or a pointer to character string or a string in double quotes.
 * second argument is to select font, for which rwo values i.e. 0 and 1 are supported.
 */

#include "TimerOne.h"
#include "SPI.h"
#include "ledP10.h"
int brightness = 0;
int intensifyAmount = 5;
int brake1 = 
int brake2 = 
int saddleButton = 13;
LedP10 myled;

void setup() 
{
    myled.init(3,4,8,9,1);
    pinMode(led, OUTPUT);
    pinMode(saddleButton, INPUT);
    pinMode(brake1, INPUT);
    pinMode(brake2, INPUT);
      /*
      P10 Select Line A - Arduino Pin 3
      P10 Select Line B - Arduino Pin 4
      P10 Store Line    - Arduino Pin 8
      P10 OE Line       - Arduino Pin 9
      No. of Panels     - 1 (Can be up to 10)
      */
}
void loop() 
{
    saddlebuttonState= digitalRead(saddleButton);
    brake1State = digitalRead(brake1);
    brake2State = digitalRead(brake2);
    if(saddlebuttonState==HIGH){
      if((brake1State || brake2State)==HIGH{
        myled.showmsg_single_static("|||",0);
        analogWrite(myled, brightness);
        digitalWrite(myled,HIGH);
        delay(1000);
        digatalWrite(myled,LOW);
        delay(1000);
        delay(500);
        brightness = brightness + intensifyAmount;
      }
    }
} 
 

  // For blinking left indicator light..
    if (value > 650 && value < 750) {
    for (int i = 0;i<=10; i++) {
      n = n + 1;
      delay(750);
      if (n % 2 == 0) {
        dmd.drawLine(7, 0, 0, 7);
        dmd.drawLine(1, 7, 14, 7);
        dmd.drawLine(1, 8, 8, 15);
        }
        else {
          dmd.clearScreen();
          }
          }
          resetFunc();}
// For blinking right indicator light..
else if (value > 480 && value < 650) {
  for (int i = 0;i<=10; i++) {
    n = n + 1;
    delay(750);
    if (n % 2 == 0) {
      dmd.drawLine(24, 0, 31, 7);
      dmd.drawLine(15, 7, 30, 7);
      dmd.drawLine(23, 15, 30, 8);
      }
      else {
        dmd.clearScreen();
        }
        }
        resetFunc();}
        // Brake..
  if (value > 750 && value < 800){
    for (int i = 0;i<=10; i++) {
      n = n + 1;
      delay(750);
      if (n % 2 == 0) {
        dmd.drawFilledBox(0, 0, 31, 15);
        }
        else {
          dmd.clearScreen();
          }
          }
          resetFunc();}
          }
            Indicator and master button:

  #include "TimerOne.h"
#include "SPI.h"
#include "ledP10.h"
int L_in_button =
int R_in_button =
int master_btn = 
LedP10 myled;

void setup(){
  pinMode(indi_1, INPUT_PULLUP);
  pinMode(indi_2, INPUT_PULLUP);
  pinMode(master_btn, INPUT_PULLUP);
  myled.init(3,4,8,9,1);

}
void loop(){
  if(digitalRead(L_in_button)==HIGH){
     myled.showmsg_single_static("<-",0);
  }
  if(digitalRead(R_in_button)==HIGH){
    myled.showmsg_single_static("->",0);
  }
  if(digitalRead(master_btn)==HIGH){
    myled.showmsg_single_static("|||||||",0);
  }
  
  }

Problem statement 1:

#include <SPI.h>
#include <DMD2.h>
#include <fonts/SystemFont5x7.h>

SoftDMD dmd(1,1);int brake1 = 
int brake2 =int saddleButton = 13;
void setup() {  dmd.setBrightness(255);
  dmd.selectFont(SystemFont5x7);
  dmd.begin();
  dmd.drawFilledBox(0,0,31,15, GRAPHICS_OFF);   pinMode(saddleButton, INPUT);  pinMode(brake1, INPUT);   pinMode(brake2, INPUT); 
  
}

int n = 2;
void loop() { saddlebuttonState= digitalRead(saddleButton); brake1State = digitalRead(brake1);  brake2State = digitalRead(brake2);       if(saddlebuttonState==HIGH){ if((brake1State || brake2State)==HIGH{  n = n + 1;
  delay(750);
  if(n % 2 == 0) {
    dmd.drawFilledBox(0,0,31,15);
  } else {
    dmd.clearScreen(); 
}}