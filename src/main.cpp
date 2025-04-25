#include <Arduino.h>
#include "M5Unified.h"

int a = 10;
int b = 10;
int x,y;
int w,h;

void setup() {
  // put your setup code here, to run once:

  M5.begin();
  M5.Display.print("Hello, M5Unified!\n");
  
  w = M5.Display.width();
  h = M5.Display.height();
  x = 0;
  y = h-b;
}

void loop() {
  // put your main code here, to run repeatedly:
  M5.update();
  if(M5.BtnA.wasPressed()) {
    M5.Lcd.clear();
    if(x > 10){
      x -= 10;
    }
    M5.Lcd.fillRect(x, y, a, b, TFT_RED);
  }
  if(M5.BtnC.wasPressed()) {
    M5.Lcd.clear();
    if(x < w - a){
      x += 10;
    }
    M5.Lcd.fillRect(x, y, a, b, TFT_RED);
  }
}

