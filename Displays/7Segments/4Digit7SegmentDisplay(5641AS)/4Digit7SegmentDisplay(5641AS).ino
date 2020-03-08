
int A = 2;
int B = 3;
int C = 4;
int D = 5;
int E = 6;
int F = 7;
int G = 8;
int DP = 9;

int Digit1 = 10;
int Digit2 = 11;
int Digit3 = 12;
int Digit4 = 13;

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
  pinMode(Digit1, OUTPUT);
  pinMode(Digit2, OUTPUT);
  pinMode(Digit3, OUTPUT);
  pinMode(Digit4, OUTPUT);
}

void loop() {
  displayNumber(4532);
}

// DISPLAY
void displayNumber(int value) {

  if (value > 9999 || value < 0) {
    error();
    return;
  }

  int once = value % 10;
  int tens = ((value % 100) - once) / 10;
  int hundreds = ((value % 1000) - (tens + once)) / 100;
  int thousands = (value - (hundreds + tens + once)) / 1000;
  
  digitNumberAndItsValue(1, once);
  if (value < 10){
    digitNumberAndItsValue(2, -1);
  } else {
    digitNumberAndItsValue(2, tens);
  }
  
  if (value < 100){
    digitNumberAndItsValue(3, -1);
  } else {
    digitNumberAndItsValue(3, hundreds);
  }
  
  if (value < 1000){
    digitNumberAndItsValue(4, -1);
  } else {
    digitNumberAndItsValue(4, thousands);
  }
  
}

void digitNumberAndItsValue(int digitNumber, int value){

  if (digitNumber > 4 || digitNumber < 1) {
    error();
    return;
  }
  
  switch (digitNumber) {
    case 1:
      digit_0001();
      break;
    case 2:
      digit_0010();
      break;
    case 3:
      digit_0100();
      break;
    case 4:
      digit_1000();
      break;
    default:
      digit_0000();
      break;
  }
  
  switch (value) {
    case 0:
      zero();
      allOff();
      break;
    case 1:
      one();
      allOff();
      break;
    case 2:
      two();
      allOff();
      break;
    case 3:
      three();
      allOff();
      break;
    case 4:
      four();
      allOff();
      break;
    case 5:
      five();
      allOff();
      break;
    case 6:
      six();
      allOff();
      break;
    case 7:
      seven();
      allOff();
      break;
    case 8:
      eight();
      allOff();
      break;
    case 9:
      nine();
      allOff();
      break;
    default:
      allOff();
      break;
  }
}

// NUMBERS

void digit_0000() {
  digitalWrite(Digit1, HIGH);
  digitalWrite(Digit2, HIGH);
  digitalWrite(Digit3, HIGH);
  digitalWrite(Digit4, HIGH);
}

void digit_0001() {
  digitalWrite(Digit1, LOW);
  digitalWrite(Digit2, HIGH);
  digitalWrite(Digit3, HIGH);
  digitalWrite(Digit4, HIGH);
}

void digit_0010() {
  digitalWrite(Digit1, HIGH);
  digitalWrite(Digit2, LOW);
  digitalWrite(Digit3, HIGH);
  digitalWrite(Digit4, HIGH);
}

void digit_0011() {
  digitalWrite(Digit1, LOW);
  digitalWrite(Digit2, LOW);
  digitalWrite(Digit3, HIGH);
  digitalWrite(Digit4, HIGH);
}

void digit_0100() {
  digitalWrite(Digit1, HIGH);
  digitalWrite(Digit2, HIGH);
  digitalWrite(Digit3, LOW);
  digitalWrite(Digit4, HIGH);
}

void digit_0101() {
  digitalWrite(Digit1, LOW);
  digitalWrite(Digit2, HIGH);
  digitalWrite(Digit3, LOW);
  digitalWrite(Digit4, HIGH);
}

void digit_0111() {
  digitalWrite(Digit1, LOW);
  digitalWrite(Digit2, LOW);
  digitalWrite(Digit3, LOW);
  digitalWrite(Digit4, HIGH);
}

void digit_1000() {
  digitalWrite(Digit1, HIGH);
  digitalWrite(Digit2, HIGH);
  digitalWrite(Digit3, HIGH);
  digitalWrite(Digit4, LOW);
}

void digit_1001() {
  digitalWrite(Digit1, LOW);
  digitalWrite(Digit2, HIGH);
  digitalWrite(Digit3, HIGH);
  digitalWrite(Digit4, LOW);
}

void digit_1010() {
  digitalWrite(Digit1, HIGH);
  digitalWrite(Digit2, LOW);
  digitalWrite(Digit3, HIGH);
  digitalWrite(Digit4, LOW);
}

void digit_1011() {
  digitalWrite(Digit1, LOW);
  digitalWrite(Digit2, LOW);
  digitalWrite(Digit3, HIGH);
  digitalWrite(Digit4, LOW);
}

void digit_1100() {
  digitalWrite(Digit1, HIGH);
  digitalWrite(Digit2, HIGH);
  digitalWrite(Digit3, LOW);
  digitalWrite(Digit4, LOW);
}

void digit_1101() {
  digitalWrite(Digit1, LOW);
  digitalWrite(Digit2, HIGH);
  digitalWrite(Digit3, LOW);
  digitalWrite(Digit4, LOW);
}

void digit_1110() {
  digitalWrite(Digit1, HIGH);
  digitalWrite(Digit2, LOW);
  digitalWrite(Digit3, LOW);
  digitalWrite(Digit4, LOW);
}

void digit_1111() {
  digitalWrite(Digit1, LOW);
  digitalWrite(Digit2, LOW);
  digitalWrite(Digit3, LOW);
  digitalWrite(Digit4, LOW);
}

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
  digit_0001();
  decimalPoint();
  r();
  allOff();
  digit_0010();
  o();
  allOff();
  digit_0100();
  r();
  allOff();
  digit_1000();
  e();
  allOff();
}

void e() {
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(DP, LOW);
}

void o() {
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, LOW);
  digitalWrite(G, HIGH);
  digitalWrite(DP, LOW);
}

void r() {
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, HIGH);
  digitalWrite(F, LOW);
  digitalWrite(G, HIGH);
  digitalWrite(DP, LOW);
}

void x() {
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(DP, LOW);
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

void countdown() {
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

void countUp() {
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
