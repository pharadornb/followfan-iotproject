//const int pirPin = 12;
//const int ledPin = 13;
//int pirState = 0;
//
//void setup()
//{
//  Serial.begin(9600);
//  pinMode(pirPin, INPUT);
//  pinMode(ledPin, OUTPUT);
//}
//
//void loop()
//{
//  pirState = digitalRead(pirPin);
//  Serial.print("val = ");
//  Serial.println(pirState);
//  
//  if (pirState == HIGH) {
//    digitalWrite(ledPin, HIGH);
////    delay(5000);
//  }else {
//    digitalWrite(ledPin, LOW);
//  }
//  delay(1000);
//}

/* Relay sensor control */
int Relay1 = 2; // กำหนดขาใช้งาน
void setup()
{
  pinMode(Relay1, OUTPUT); // กำหนดขาทำหน้าที่ให้ขา 2 เป็น OUTPUT
  digitalWrite(Relay1, HIGH);
}
void loop()
{
  digitalWrite(Relay1, LOW); // ส่งให้ไฟติด
  delay(3000); // ดีเลย์ 1000ms
  digitalWrite(Relay1, HIGH); // ส่งให้ไฟดับ
  delay(3000); // ดีเลย์ 1000ms
}

////int inputPin= 3;
//const int pirPin = 3;
//int pirState = 0;
//
//void setup(){
////  pinMode(inputPin, INPUT);
//  pinMode(pirPin, INPUT);
//  Serial.begin(9600);
//}
//
//void loop(){
//   pirState = digitalRead(pirPin);
//   Serial.println(pirState);
//   delay(2000);
////  int value= digitalRead(inputPin);
////  Serial.println(value);
////  
////  if (pirState == HIGH)
////  {
////    Serial.println("WORKING");
////    delay(2000);
////  }
////  }else
////  {
////    Serial.println("LOW");
////  }
//}
//int led = 13;
int pir = 3;
int val = 0;
void setup() {
  pinMode(led, OUTPUT);
  pinMode(pir, INPUT);
  Serial.begin(9600);
}
void loop() {
  val = digitalRead(pir); // อ่านค่าจากเซนเซอร์ PIR
  Serial.print("val = ");
  Serial.println(val); // พิมพ์ค่าที่ตรวจจับได้จาก PIR
  if (val == 0) { // ถ้าค่า PIR เป็น 0 แสดงว่าตรวจพบวัตถุ สั่งเปิดไฟ LED
//    digitalWrite(led, 1);
  }
  else {
//    digitalWrite(led, 0); // สั่งให้ LED ดับ
  }
  delay(100);
}
