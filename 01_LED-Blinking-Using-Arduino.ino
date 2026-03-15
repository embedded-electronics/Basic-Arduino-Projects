// Episode 1: LED Blinking Using Arduino

int ledPin = 13;   // LED connected to digital pin 13

void setup()
{
  pinMode(ledPin, OUTPUT);   // Set pin 13 as OUTPUT
}

void loop()
{
  digitalWrite(ledPin, HIGH);   // Turn LED ON
  delay(1000);                  // Wait for 1 second

  digitalWrite(ledPin, LOW);    // Turn LED OFF
  delay(1000);                  // Wait for 1 second
}
