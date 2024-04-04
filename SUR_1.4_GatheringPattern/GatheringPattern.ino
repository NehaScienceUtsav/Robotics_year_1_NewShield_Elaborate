void setup() {
  // Set pins D2 to D6 as outputs
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  // Turn ON the outer 2 LEDs (LEDs connected to pins 2 and 6)
  digitalWrite(2, HIGH);
  digitalWrite(6, HIGH);
  
  // Wait for 1 second
  delay(1000);
  
  // Turn ON the next 2 LEDs (LEDs connected to pins 3 and 5)
  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  
  // Wait for 1 second
  delay(1000);
  
  // Turn ON the middle LED (LED connected to pin 4)
  digitalWrite(4, HIGH);
  
  // Wait for 1 second
  delay(1000);
  
  // Turn OFF all LEDs
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  
  // Wait for 1 second
  delay(1000);
}
