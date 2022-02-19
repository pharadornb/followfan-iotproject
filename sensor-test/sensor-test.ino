
/* pir sensor digital pin 9 + pin 10 */
int digitalPin = 9;
int val = 0;

void setup() {
  pinMode(digitalPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  val = digitalRead(digitalPin);
  
  Serial.print("val = ");
  Serial.println(val);
  if (val == 0) {
    Serial.print("Start");
  }
  else {
    Serial.print("End");
  }
  delay(100);
}

/* pir sensor digital pin 9 */
//const int pirPin = 9;
//int pirState = 0;
//
//void setup()
//{
//  pinMode(pirPin, INPUT);
//  Serial.begin(9600);
//}
//
//void loop()
//{
//  pirState = digitalRead(pirPin);
//
//  Serial.print("\npirState : "); 
//  Serial.println(pirState);
//  
//  if (pirState == HIGH) {
//    Serial.print("Open");
//  }else {
//    Serial.print("Close");
//  }
//  delay(1000);
//}

/* Motor L298N digital pin 5, 6, 7, 8 */
//#define IN1 5
//#define IN2 6
//#define IN3 7
//#define IN4 8
//
//void setup() {
//  pinMode(IN1, OUTPUT);
//  pinMode(IN2, OUTPUT);
//  pinMode(IN3, OUTPUT);
//  pinMode(IN4, OUTPUT);
//}
//
//void loop() {
//  forwardComand();
//  delay(1000);
//  reverseComand();
//  delay(1000);
//  leftComand();
//  delay(1000);
//  rightComand();
//  delay(1000);
//}
//
//void forwardComand() {
//  digitalWrite(IN1, HIGH);
//  digitalWrite(IN2, LOW);
//  digitalWrite(IN3, HIGH);
//  digitalWrite(IN4, LOW);
//}
//
//void reverseComand() {
//  digitalWrite(IN1, LOW);
//  digitalWrite(IN2, HIGH);
//  digitalWrite(IN3, LOW);
//  digitalWrite(IN4, HIGH);
//}
//
//void leftComand() {
//  digitalWrite(IN1, LOW);
//  digitalWrite(IN2, HIGH);
//  digitalWrite(IN3, HIGH);
//  digitalWrite(IN4, LOW);
//}
//
//void rightComand() {
// digitalWrite(IN1, HIGH);
//  digitalWrite(IN2, LOW);
//  digitalWrite(IN3, LOW);
//  digitalWrite(IN4, HIGH);
//}

/*Ultrasonic if < 50 cm open fan else close fans */
//int relayPin = 2;
//int trigPin = 3;
//int echoPin = 4;
//long duration;
//int distance;
//
//void setup()
//{
//  pinMode(echoPin, INPUT);
//  pinMode(trigPin, OUTPUT);
//  pinMode(relayPin, OUTPUT);
//  Serial.begin(9600);
//}
//
//void loop()
//{
//  digitalWrite(trigPin, LOW);
//  delayMicroseconds(2);
//  digitalWrite(trigPin, HIGH);
//  delayMicroseconds(10);
//  digitalWrite(trigPin, LOW);
//  
//  duration = pulseIn(echoPin, HIGH);
//  distance = duration * 0.034 / 2;
//  Serial.print("Distance: ");
//  Serial.println(distance);
//  
//  if(distance <= 50) {
//    digitalWrite(relayPin, LOW);
//  }else{
//    digitalWrite(relayPin, HIGH);
//  }
//  delay(2000);
//}


/*Ultrasonic trig digital pin 3, echo digital pin 4 */
//int trigPin = 3;
//int echoPin = 4;
//long duration;
//int distance;
//
//void setup()
//{
//  pinMode(echoPin, INPUT);
//  pinMode(trigPin, OUTPUT);
//  Serial.begin(9600);
//}
//
//void loop()
//{
//  digitalWrite(trigPin, LOW);
//  delayMicroseconds(2);
//  digitalWrite(trigPin, HIGH);
//  delayMicroseconds(10);
//  digitalWrite(trigPin, LOW);
//  
//  duration = pulseIn(echoPin, HIGH);
//  distance = duration * 0.034 / 2;
//  Serial.print("Distance: ");
//  Serial.println(distance);
//}


/*Relay digital pin 2*/
//int Relay1 = 2; // กำหนดขาใช้งาน
//
//void setup()
//{
//  pinMode(Relay1, OUTPUT); // กำหนดขาทำหน้าที่ให้ขา 2 เป็น OUTPUT
//  digitalWrite(Relay1, HIGH);
//}
//void loop()
//{
//  digitalWrite(Relay1, LOW); // ส่งให้ไฟติด
//  delay(10000); // ดีเลย์ 1000ms
//  digitalWrite(Relay1, HIGH); // ส่งให้ไฟดับ
//  delay(2000); // ดีเลย์ 1000ms
//}
