#include <Servo.h>
#include "pin_config.h"
#include "motor_control.h"
#include "password_auth.h"
#include "lcd_display.h"

Servo lockServo;

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  lockServo.attach(SERVO_PIN);
  lockServo.write(0); // locked

  lcdInit();
  initPassword();
}

void loop() {
  moveForward();   // autonomous movement (basic)

  if (checkPassword()) {
    stopMotors();
    lcdMessage("Access Granted");
    lockServo.write(90);  // unlock
    delay(5000);
    lockServo.write(0);   // lock again
    lcdMessage("Locked");
  }
}
