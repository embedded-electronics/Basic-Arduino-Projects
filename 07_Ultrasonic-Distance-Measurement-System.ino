// Episode 7: Ultrasonic Distance Measurement System Using HC-SR04

const int TriggerPin = 8;    // Trigger pin of ultrasonic sensor
const int EchoPin = 9;       // Echo pin of ultrasonic sensor

long Duration = 0;           // Variable to store the echo signal time

void setup() 
{
  pinMode(TriggerPin, OUTPUT);   // Set Trigger pin as OUTPUT
  pinMode(EchoPin, INPUT);       // Set Echo pin as INPUT
  Serial.begin(9600);            // Start serial communication
}

void loop() 
{
  // Send a 10 microsecond pulse to trigger the ultrasonic sensor

  digitalWrite(TriggerPin, LOW);     // Ensure trigger is LOW
  delayMicroseconds(2);              // Wait for 2 microseconds

  digitalWrite(TriggerPin, HIGH);    // Send HIGH pulse
  delayMicroseconds(10);             // Keep HIGH for 10 microseconds
  digitalWrite(TriggerPin, LOW);     // End the pulse

  // Measure the time taken for echo to return
  Duration = pulseIn(EchoPin, HIGH);

  // Call function to calculate distance
  long Distance_mm = Distance(Duration);

  // Print distance on Serial Monitor
  Serial.print("Distance = ");
  Serial.print(Distance_mm);
  Serial.println(" mm");

  delay(1000);   // Wait 1 second before next reading
}

// Function to convert time into distance
long Distance(long time)
{
  long DistanceCalc;

  // Calculate distance in millimeters
  DistanceCalc = ((time / 2.9) / 2);

  return DistanceCalc;   // Return calculated distance
}
