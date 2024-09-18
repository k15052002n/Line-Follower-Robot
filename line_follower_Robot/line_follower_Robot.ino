// Motor control pins
int motorLeftPin = 9;   // Pin connected to the left motor
int motorRightPin = 10; // Pin connected to the right motor

void setup() {
  pinMode(motorLeftPin, OUTPUT);
  pinMode(motorRightPin, OUTPUT);
}

void loop() {
  // Both motors rotate at the same speed for 2 seconds
  analogWrite(motorLeftPin, 200);  // Set left motor speed (PWM value: 0-255)
  analogWrite(motorRightPin, 230); // Set right motor speed (PWM value: 0-255)

  // Left motor rotates faster than the right motor for 2 seconds
  analogWrite(motorLeftPin, 225);  // Increase left motor speed
  analogWrite(motorRightPin, 200); // Maintain right motor speed

  // Right motor rotates faster than the left motor for 2 seconds
  analogWrite(motorLeftPin, 210); // Maintain left motor speed
  analogWrite(motorRightPin, 240); // Increase right motor speed

}
