#include <SPI.h>
#include <glcd.h>
//#include <glcd_Config.h>
//#include <ST7565.h>
#include <fonts/allFonts.h>

#define LCD_POWER             (40u)
#define LCD_BACKLIGHT         (35u)

void setup() {
  //Turn LCD On :-)
  pinMode(LCD_POWER, OUTPUT);
  digitalWrite(LCD_POWER, LOW);
  //Turn Backlight On
  pinMode(LCD_BACKLIGHT, OUTPUT);
  digitalWrite(LCD_BACKLIGHT, HIGH);
  //Init LCD
  GLCD.Init(NON_INVERTED); 
  GLCD.SelectFont(System5x7);
  GLCD.print("Hello, world!");
  GLCD.display();
}

void loop() {
  GLCD.CursorTo(0, 1);
  // print the number of seconds since reset:
  GLCD.print(millis()/1000);
  GLCD.display();
  delay(1000);
}


