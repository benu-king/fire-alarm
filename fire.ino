#include <SoftwareSerial.h>
#include <Servo.h>
SoftwareSerial sim800(11, 10);
Servo myServo;
String phoneNumber = "+251952306750";

int flamePin = 8;
int buzzerPin = 7;

int flameState = 0;
bool alreadyTriggered = false;

int angle = 0;
int direction = 1;

void setup() {
  Serial.begin(9600);
  sim800.begin(9600);

  pinMode(flamePin, INPUT);
  pinMode(buzzerPin, OUTPUT);

  myServo.attach(9);
  delay(3000);
  sim800.println("AT");
  delay(1000);
  sim800.println("AT+CLIP=1");
  delay(1000);

  Serial.println("System Ready");
}
void loop() {
  flameState = digitalRead(flamePin);

  if (flameState == LOW) {
    Serial.println("🔥 Fire Detected!");

    digitalWrite(buzzerPin, HIGH);

    myServo.write(angle);
    if (!alreadyTriggered) {
      sim800.print("ATD");
      sim800.print(phoneNumber);
      sim800.println(";");

      delay(20000);
      sim800.println("ATH");

      alreadyTriggered = true;
    }

    delay(100);
  }

  else {
    digitalWrite(buzzerPin, LOW);
    alreadyTriggered = false;

    myServo.write(angle);
    angle += direction * 2;

    if (angle >= 90) {
      angle = 90;
      direction = -1;
    } 
    else if (angle <= 0) {
      angle = 0;
      direction = 1;
    }

    delay(30);
  }
}