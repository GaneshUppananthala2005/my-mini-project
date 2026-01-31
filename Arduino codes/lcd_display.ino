#include <LiquidCrystal.h>
#include "lcd_display.h"
#include "pin_config.h"

LiquidCrystal lcd(RS, EN, D4, D5, D6, D7);

void lcdInit() {
  lcd.begin(16, 2);
  lcd.print("Enter Password");
}

void lcdMessage(const char* msg) {
  lcd.clear();
  lcd.print(msg);
}
