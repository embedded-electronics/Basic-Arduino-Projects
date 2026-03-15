// Episode 5: LDR-Based Automatic Street Light System

int lightSensor = 0;   // variable to store LDR value

void setup() 
{
  pinMode(A0, INPUT);      // LDR connected to A0
  pinMode(9, OUTPUT);      // LED connected to PWM pin 9
  Serial.begin(9600);      // Start serial monitor
}

void loop()
{
  lightSensor = analogRead(A0);      // Read LDR value
  Serial.println(lightSensor);       // Print value on Serial Monitor

  analogWrite(9, map(lightSensor, 0, 1023, 0, 255));  // Control LED brightness

  delay(10);
}
