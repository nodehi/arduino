
int A = 2;
int B = 3;
int DP = 4;
int C = 5;
int D = 8;
int E = 9;
int F = 10;
int G = 11;

int delayTime = 10;
int longDelay = 100 * delayTime;
int midiumDelay = 50 * delayTime;
int shortDelay = 25 * delayTime;
int veryShortDelay = 10 * delayTime;

void setup() {
  // put your setup code here, to run once:
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(DP, OUTPUT);
}

void loop() {

  coundDown();
  goRoundClockWise();
  goRoundCounterClockWise();
  coundUp();
  goRoundClockWise();
  goRoundCounterClockWise();

//  displayNumber(6);
  
}

// DISPLAY
void displayNumber(int value) {
  switch (value) {
    case 0:
      zero();
      break;
    case 1:
      one();
      break;
    case 2:
      two();
      break;
    case 3:
      three();
      break;
    case 4:
      four();
      break;
    case 5:
      five();
      break;
    case 6:
      six();
      break;
    case 7:
      seven();
      break;
    case 8:
      eight();
      break;
    case 9:
      nine();
      break;
    default:
      error();
      break;
  }
}

// NUMBERS
void decimalPoint() {
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  digitalWrite(DP, HIGH);
}

void zero() {
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, LOW);
  digitalWrite(DP, LOW);
}

void one() {
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  digitalWrite(DP, LOW);
}

void two() {
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, LOW);
  digitalWrite(G, HIGH);
  digitalWrite(DP, LOW);
}

void three() {
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, HIGH);
  digitalWrite(DP, LOW);
}

void four() {
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(DP, LOW);
}

void five() {
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(DP, LOW);
}

void six() {
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(DP, LOW);
}

void seven() {
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  digitalWrite(DP, LOW);
}

void eight() {
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(DP, LOW);
}

void nine() {
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(DP, LOW);
}

// General Functions

void error() {
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(DP, HIGH);
}

void allOn() {
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(DP, HIGH);
}

void allOff() {
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  digitalWrite(DP, LOW);
}

void coundDown() {
  nine();
  delay(shortDelay);
  eight();
  delay(shortDelay);
  seven();
  delay(shortDelay);
  six();
  delay(shortDelay);
  five();
  delay(shortDelay);
  four();
  delay(shortDelay);
  three();
  delay(shortDelay);
  two();
  delay(shortDelay);
  one();
  delay(shortDelay);
  zero();
  delay(shortDelay);
}

void coundUp() {
  zero();
  delay(shortDelay);
  one();
  delay(shortDelay);
  two();
  delay(shortDelay);
  three();
  delay(shortDelay);
  four();
  delay(shortDelay);
  five();
  delay(shortDelay);
  six();
  delay(shortDelay);
  seven();
  delay(shortDelay);
  eight();
  delay(shortDelay);
  nine();
  delay(shortDelay);
}

void goRoundClockWise() {
  allOff();
  digitalWrite(A, HIGH);
  delay(veryShortDelay);

  allOff();
  digitalWrite(B, HIGH);
  delay(veryShortDelay);

  allOff();
  digitalWrite(C, HIGH);
  delay(veryShortDelay);

  allOff();
  digitalWrite(D, HIGH);
  delay(veryShortDelay);

  allOff();
  digitalWrite(E, HIGH);
  delay(veryShortDelay);

  allOff();
  digitalWrite(F, HIGH);
  delay(veryShortDelay);
}

void goRoundCounterClockWise() {
  allOff();
  digitalWrite(A, HIGH);
  delay(veryShortDelay);

  allOff();
  digitalWrite(F, HIGH);
  delay(veryShortDelay);

  allOff();
  digitalWrite(E, HIGH);
  delay(veryShortDelay);

  allOff();
  digitalWrite(D, HIGH);
  delay(veryShortDelay);

  allOff();
  digitalWrite(C, HIGH);
  delay(veryShortDelay);

  allOff();
  digitalWrite(B, HIGH);
  delay(veryShortDelay);
}
