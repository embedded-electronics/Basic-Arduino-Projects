// Episode 4: PWM LED Brightness Control Using Potentiometer

int potPin = A2;     // Potentiometer pin
int ledPin = 9;      // PWM pin for LED
int val = 0;

void setup()
{
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  val = analogRead(potPin);        // Read value (0 - 1023)

  val = map(val, 0, 1023, 0, 255); // Convert to PWM range

  analogWrite(ledPin, val);        // Control LED brightness
}
