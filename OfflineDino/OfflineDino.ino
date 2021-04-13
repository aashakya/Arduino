#include <Servo.h>
int ldrValue=0;
int threshold= 600; 
int release_angle=47  ;       
int press_angle=57 ;            
Servo myservo;

void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);     
  myservo.attach(9); 
  myservo.write(release_angle);
}

void loop() {
  ldrValue=analogRead(A4);
  Serial.println(ldrValue);
  myservo.write(release_angle); 
  delay(10);
  
  if(ldrValue>threshold)
  {
    digitalWrite(13 ,LOW ); 
  } 
  else
  { 
       
     //digitalWrite(13 ,HIGH ); 
     Serial.println("up");
     myservo.write(press_angle);          
     delay(250)  ;       
     myservo.write(release_angle); 
     delay(250);  }
   
}
