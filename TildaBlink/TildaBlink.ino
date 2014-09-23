/*
Tilda LED test.
Hacked from Adafruit Arduino - Lesson 3. RGB LED
*/

#define LED1_BLUE         (37u)
#define LED1_GREEN        (39u)
#define LED1_RED          (41u)
 
void setup()
{
  pinMode(LED1_RED, OUTPUT);
  pinMode(LED1_GREEN, OUTPUT);
  pinMode(LED1_BLUE, OUTPUT);  
}
 
void loop()
{
  setColor(255, 0, 0);  // red
  delay(1000);
  setColor(0, 255, 0);  // green
  delay(1000);
  setColor(0, 0, 255);  // blue
  delay(1000);
  setColor(255, 255, 0);  // yellow
  delay(1000);  
  setColor(80, 0, 80);  // purple
  delay(1000);
  setColor(0, 255, 255);  // aqua
  delay(1000);
}
 
void setColor(int red, int green, int blue)
{
  analogWrite(LED1_RED, red);
  analogWrite(LED1_GREEN, green);
  analogWrite(LED1_BLUE, blue);  
}


