// Display messages on LCD module on each button press event

#include <LiquidCrystal.h>
// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
int kount = 0;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  lcd.begin(16, 2);            // set up the LCD's number of columns and rows:
  lcd.print("hello, world!");  // Print a message to the LCD.
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  lcd.print('CSE Department');
  lcd.setCursor(15, 0);  // column 15, First line
  lcd.print(kount);      // counter
  delay(10000);
  lcd.setCursor(0, 1);
  lcd.print('PDA College');
  delay(10000);
  kount++;
}
