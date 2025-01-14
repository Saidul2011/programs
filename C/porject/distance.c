#include <LiquidCrystal.h>


LiquidCrystal lcd(7, 6, 5, 4, 3, 2);


const int trigPin = 9;
const int echoPin = 10;

void setup() {

  Serial.begin(9600);

 
  lcd.begin(16, 2);
  
  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  
  lcd.setCursor(0, 0);
  lcd.print("Distance:");
}

void loop() {
 
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  
  long duration = pulseIn(echoPin, HIGH);

  
  float distance = (duration * 0.0343) / 2; 
  
  lcd.setCursor(0, 1);  
  lcd.print("                "); 
  lcd.setCursor(0, 1);  
  lcd.print(distance);
  lcd.print(" cm");
  
  
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  
  delay(5000);
}