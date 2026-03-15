// Episode 9: 7-Segment Display Counter Using Arduino

// Pins connected to segments a,b,c,d,e,f,g
const int segPins[7] = {3,4,5,6,7,8,9}; 

// Push button pin
const int buttonPin = 10;

int count = 0;                // Variable to store current number
int lastButtonState = HIGH;   // Store previous button state

// Segment patterns for digits 0–F (Hexadecimal)
byte digits[16][7] = {
  {0,0,0,0,0,0,1}, //0
  {1,0,0,1,1,1,1}, //1
  {0,0,1,0,0,1,0}, //2
  {0,0,0,0,1,1,0}, //3
  {1,0,0,1,1,0,0}, //4
  {0,1,0,0,1,0,0}, //5
  {0,1,0,0,0,0,0}, //6
  {0,0,0,1,1,1,1}, //7
  {0,0,0,0,0,0,0}, //8
  {0,0,0,0,1,0,0}, //9
  {0,0,0,1,0,0,0}, //A
  {1,1,0,0,0,0,0}, //b
  {0,1,1,0,0,0,1}, //C
  {1,0,0,0,0,1,0}, //d
  {0,1,1,0,0,0,0}, //E
  {0,1,1,1,0,0,0}  //F
};

void setup() 
{
  pinMode(buttonPin, INPUT_PULLUP);   // Button with internal pull-up resistor

  // Set all segment pins as OUTPUT
  for(int i = 0; i < 7; i++)
  {
    pinMode(segPins[i], OUTPUT);
  }
}

void loop() 
{
  int buttonState = digitalRead(buttonPin);   // Read button state

  // Detect button press (transition from HIGH → LOW)
  if (buttonState == LOW && lastButtonState == HIGH) 
  {
    count++;                // Increase counter

    if(count > 15)          // Reset after F
      count = 0;

    delay(200);             // Debounce delay
  }

  lastButtonState = buttonState;   // Store current state

  // Display the digit on 7-segment
  for(int i = 0; i < 7; i++)
  {
    digitalWrite(segPins[i], digits[count][i]);
  }
}
