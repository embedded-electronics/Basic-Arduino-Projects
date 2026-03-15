// Episode 3: Traffic Light Control System Using Arduino

// Traffic Light Pins

int R1 = 2;
int Y1 = 3;
int G1 = 4;

int R2 = 5;
int Y2 = 6;
int G2 = 7;

int R3 = 8;
int Y3 = 9;
int G3 = 10;

void setup()
{
  pinMode(R1, OUTPUT);
  pinMode(Y1, OUTPUT);
  pinMode(G1, OUTPUT);

  pinMode(R2, OUTPUT);
  pinMode(Y2, OUTPUT);
  pinMode(G2, OUTPUT);

  pinMode(R3, OUTPUT);
  pinMode(Y3, OUTPUT);
  pinMode(G3, OUTPUT);
}

void loop()
{
  // Signal 1 GREEN
  digitalWrite(R1, LOW);
  digitalWrite(Y1, LOW);
  digitalWrite(G1, HIGH);

  digitalWrite(R2, HIGH);
  digitalWrite(Y2, LOW);
  digitalWrite(G2, LOW);

  digitalWrite(R3, HIGH);
  digitalWrite(Y3, LOW);
  digitalWrite(G3, LOW);

  delay(4000);

  // Signal 1 YELLOW
  digitalWrite(G1, LOW);
  digitalWrite(Y1, HIGH);
  delay(1000);
  digitalWrite(Y1, LOW);

  // Signal 2 GREEN
  digitalWrite(R1, HIGH);
  digitalWrite(R2, LOW);
  digitalWrite(G2, HIGH);
  delay(4000);

  // Signal 2 YELLOW
  digitalWrite(G2, LOW);
  digitalWrite(Y2, HIGH);
  delay(1000);
  digitalWrite(Y2, LOW);

  // Signal 3 GREEN
  digitalWrite(R2, HIGH);
  digitalWrite(R3, LOW);
  digitalWrite(G3, HIGH);
  delay(4000);

  // Signal 3 YELLOW
  digitalWrite(G3, LOW);
  digitalWrite(Y3, HIGH);
  delay(1000);
  digitalWrite(Y3, LOW);

  digitalWrite(R3, HIGH);
}
