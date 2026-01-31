#include <Keypad.h>
#include "password_auth.h"

const char correctPassword[] = "1234";
char enteredPassword[5];
int index = 0;

char keys[4][4] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins[4] = {A4, A5, 2, 4};
byte colPins[4] = {8, 9, 10, 11};

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, 4, 4);

void initPassword() {
  index = 0;
}

bool checkPassword() {
  char key = keypad.getKey();
  if (key) {
    enteredPassword[index++] = key;

    if (index == 4) {
      enteredPassword[4] = '\0';
      index = 0;
      return strcmp(enteredPassword, correctPassword) == 0;
    }
  }
  return false;
}
