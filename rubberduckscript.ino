#include <Keyboard.h>

char ctrlKey = KEY_LEFT_GUI;
char enter = KEY_RETURN;
int count=0;

void setup() {
 
  Keyboard.begin();
  
}

void loop() {
  if (count ==0){
   delay(6000);
  Keyboard.press(ctrlKey);
  
  delay(100);
  Keyboard.press('r');
  Keyboard.releaseAll();//-----------------------------
  delay(300);
  // wait for new window to open:
  Keyboard.print("cmd");
  delay(100);
  Keyboard.press(KEY_LEFT_CTRL);
  delay(300);
  Keyboard.press(KEY_LEFT_SHIFT);
  delay(300);
  Keyboard.press(enter);
  Keyboard.releaseAll();
  delay(1000);
  Keyboard.press(KEY_LEFT_ALT);
  delay(100);
  Keyboard.press('y');
  
  Keyboard.releaseAll();//-----------------------------
  delay(500);

  Keyboard.println("Start https://www.youtube.com/watch?v=xvFZjo5PgG0 && exit");
  delay(100);
  Keyboard.press(enter);
   Keyboard.releaseAll();
  count++;
  delay(1000);
  }
}
