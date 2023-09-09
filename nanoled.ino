const int soilMoisturePin = A0;  // Define the analog pin for soil moisture sensor
const int ledPin = 9;           // Define the pin for the LED

void setup() {
  pinMode(soilMoisturePin, INPUT);  // Set the soil moisture pin as input
  pinMode(ledPin, OUTPUT);         // Set the LED pin as output
  Serial.begin(9600);              // Initialize serial communication
}

void loop() {
  int soilMoistureValue = analogRead(soilMoisturePin);  // Read the soil moisture value
  Serial.println(soilMoistureValue);                    // Print the value to Serial Monitor

// When no water comes in contact with sensor, LED starts blinking
  if (soilMoistureValue < 300) {  // This is just a demo value
    digitalWrite(ledPin, HIGH);  // Turn on the LED
    delay(500);                   // Delay for 0.5 seconds
    digitalWrite(ledPin, LOW);   // Turn off the LED
    delay(500);                   // Delay for 0.5 seconds
  } else {
    digitalWrite(ledPin, LOW);   // Turn off the LED
}
}