//this is a very easy one

#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the lcd's number of columns and rows
  lcd.begin(16, 2);
  // print a message to the LCD
  lcd.print("sussus amogus!");
}

void loop() {
  // not required
}
 
