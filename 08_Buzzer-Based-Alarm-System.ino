// Episode 8: Buzzer-Based Alarm System

const int buzzer = 8;   // Buzzer connected to digital pin 8

void setup() 
{
  pinMode(buzzer, OUTPUT);   // Set buzzer pin as OUTPUT
}

void loop() 
{
  tone(buzzer, 1000);   // Generate sound at 1000 Hz frequency
  delay(1000);          // Buzzer ON for 1 second

  noTone(buzzer);       // Stop the buzzer sound
  delay(1000);          // Buzzer OFF for 1 second
}
