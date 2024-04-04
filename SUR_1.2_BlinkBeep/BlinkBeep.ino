void setup() {
  // Set pin 3 as an output
  pinMode(3, OUTPUT);
}

void loop() {
  // Turn on the output at pin 3
  digitalWrite(3, HIGH);

  // Wait for 1000 milliseconds (1 second)
  delay(1000);

  // Turn off the output at pin 3
  digitalWrite(3, LOW);

  // Wait for another 1000 milliseconds (1 second)
  delay(1000);
}
