// Episode 2: Push Button Controlled LED System

int LED = 4;        // LED connected to pin 4
int BUTTON = 6;     // Button connected to pin 6

void setup()
{
  pinMode(LED, OUTPUT);      // Set LED pin as output
  pinMode(BUTTON, INPUT);    // Set Button pin as input
}

void loop()
{
  if (digitalRead(BUTTON) == HIGH)   // If button is pressed
  {
    digitalWrite(LED, LOW);          // Turn LED OFF
  }
  else
  {
    digitalWrite(LED, HIGH);         // Turn LED ON
  }
}
