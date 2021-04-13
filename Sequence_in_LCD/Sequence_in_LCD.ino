#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);
int t1=0;
int t2=1;

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sum=t1+t2;
  
  lcd.autoscroll();
  lcd.print(sum);
  lcd.print(",");
  Serial.println(sum);
  
  delay(500);
  
  t1=t2;
  t2=sum;
}
