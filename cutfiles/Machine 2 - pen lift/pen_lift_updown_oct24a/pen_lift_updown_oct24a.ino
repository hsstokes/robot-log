#include <Servo.h>
Servo lift;
int penUp = 80;
int penDown = 100;
void setup() {
  lift.attach(10);
  Serial.begin(9600);
  lift.write(penUp);
  delay(1000);
}
void loop() {
  for (int a = penUp; a <= penDown; a++) { lift.write(a); delay(5); }
  Serial.println("down");
  delay(1000);
  for (int a = penDown; a >= penUp; a--) { lift.write(a); delay(5); }
  Serial.println("up");
  delay(1000);
}
