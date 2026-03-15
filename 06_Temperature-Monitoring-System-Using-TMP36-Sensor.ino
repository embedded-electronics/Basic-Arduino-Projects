// Episode 6: Temperature Monitoring System Using TMP36 Sensor

const int sensorPin = A0;

void setup() {
  Serial.begin(9600);   // Start serial communication
}

void loop() {

  int sensorValue = analogRead(sensorPin);   // Read analog value

  float voltage = sensorValue * (5.0 / 1023.0);   // Convert ADC value to voltage

  float temperatureC = (voltage - 0.5) * 100.0;   // Convert voltage to Celsius

  float temperatureF = (temperatureC * 9.0 / 5.0) + 32.0;   // Convert Celsius to Fahrenheit

  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.println(" °C");

  Serial.print("Temperature: ");
  Serial.print(temperatureF);
  Serial.println(" °F");

  delay(1000);   // Update every 1 second
}
