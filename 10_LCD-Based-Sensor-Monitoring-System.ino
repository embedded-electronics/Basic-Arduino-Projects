// Episode 10: LCD-Based Sensor Monitoring System

#include <LiquidCrystal.h>   // Include LCD library

// LCD pin configuration: RS, E, D4, D5, D6, D7
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int sensor = A1;   // Analog pin connected to temperature sensor

float tempc;   // Variable to store temperature in Celsius
float tempf;   // Variable to store temperature in Fahrenheit
float vout;    // Variable to store sensor voltage

void setup()
{
  pinMode(sensor, INPUT);   // Configure sensor pin as INPUT
  Serial.begin(9600);       // Start serial communication
  lcd.begin(16, 2);         // Initialize 16x2 LCD display
  delay(500);
}

void loop()
{
  // Read analog value from sensor
  vout = analogRead(sensor);

  // Convert ADC value to temperature
  vout = (vout * 500) / 1023;

  tempc = vout;             // Temperature in Celsius
  tempf = (vout * 1.8) + 32; // Convert Celsius to Fahrenheit

  // Display Celsius value
  lcd.setCursor(0, 0);
  lcd.print("in DegreeC= ");
  lcd.print(tempc);

  // Display Fahrenheit value
  lcd.setCursor(0, 1);
  lcd.print("in Fahrenheit=");
  lcd.print(tempf);

  delay(1000);   // Update every 1 second
}
