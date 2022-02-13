#define IN1 2
#define IN2 3
#define IN3 4
#define IN4 5

void setup() {
//  pinMode(7, OUTPUT);
//  pinMode(8, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void loop() {
//  digitalWrite(7, HIGH);
//  delay(5000);
//  digitalWrite(7, LOW);
//  delay(5000);
//  digitalWrite(8, HIGH);
//  delay(250);
//  digitalWrite(8, LOW);
//  delay(250);
  forwardComand();
  delay(1000);
  reverseComand();
  delay(1000);
  leftComand();
  delay(1000);
  rightComand();
  delay(1000);
}

void forwardComand() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void reverseComand() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void leftComand() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void rightComand() {
 digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}
