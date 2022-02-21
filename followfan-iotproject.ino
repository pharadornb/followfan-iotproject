/* github project : https://github.com/pharadornb/followfan-iotproject */
int relayPin = 2;
int trigPin = 3;
int echoPin = 4;
long duration;
int distance;
#define motorPin0 5
#define motorPin1 6
#define motorPin2 7
#define motorPin3 8
int pirPin0 = 9;
int pirPin1 = 10;
int pirState0 = 0;
int pirState1 = 0;

void setup() {
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, HIGH);
  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(motorPin0, OUTPUT);
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motorPin3, OUTPUT);
  pinMode(pirPin0, INPUT);
  pinMode(pirPin1, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
  pirState0 = digitalRead(pirPin0);
  pirState1 = digitalRead(pirPin1);
  
  if (pirState0 == 1) {
      if(distance <=30){
        digitalWrite(relayPin, HIGH);
        backwardMove();
      }else if(distance > 30 && distance <=55){
        breakMove();
        digitalWrite(relayPin, LOW);
        delay(6000);
        digitalWrite(relayPin, HIGH);
      } else {
        digitalWrite(relayPin, HIGH);
        forwardMove();
      }
 } else if (pirState1 == 1) {
    leftMove()
    delay(1500);
 } else {
    breakMove();
    digitalWrite(relayPin, HIGH);
 }
}

void breakMove() {
  digitalWrite(motorPin0, HIGH);
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, HIGH);
  digitalWrite(motorPin3, HIGH);
}

void forwardMove() {
  digitalWrite(motorPin0, HIGH);
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, HIGH);
  digitalWrite(motorPin3, LOW);
}

void backwardMove() {
  digitalWrite(motorPin0, LOW);
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, HIGH);
}

void reverseMove() {
  digitalWrite(motorPin0, LOW);
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin2, HIGH);
}

void leftMove() {
  digitalWrite(motorPin0, LOW);
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, HIGH);
  digitalWrite(motorPin3, LOW);
}

void rightMove() {
 digitalWrite(motorPin0, HIGH);
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, HIGH);
}
