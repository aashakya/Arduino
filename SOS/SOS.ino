int greenLED = 13;
int blueLED = 11;
int redLED = 8;

void setup() {
  pinMode(greenLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
  pinMode(redLED, OUTPUT);
}

void loop() {
  digitalWrite(greenLED, LOW);
  digitalWrite(blueLED, LOW);
  digitalWrite(redLED, LOW);
  
  //SOS
  digitalWrite(greenLED, HIGH);//s
  delay(333);
  digitalWrite(greenLED, LOW);
  delay(333);
  digitalWrite(greenLED, HIGH);
  delay(333);
  digitalWrite(greenLED, LOW);
  delay(333);
  digitalWrite(greenLED, HIGH);
  delay(333);
  digitalWrite(greenLED, LOW);
  delay(999);

  digitalWrite(greenLED, HIGH);//O
  delay(999);
  digitalWrite(greenLED, LOW);
  delay(333);
  digitalWrite(greenLED, HIGH);
  delay(999);
  digitalWrite(greenLED, LOW);
  delay(333);
  digitalWrite(greenLED, HIGH);
  delay(999);
  digitalWrite(greenLED, LOW);
  delay(999);

  digitalWrite(greenLED, HIGH);//S
  delay(333);
  digitalWrite(greenLED, LOW);
  delay(333);
  digitalWrite(greenLED, HIGH);
  delay(333);
  digitalWrite(greenLED, LOW);
  delay(333);
  digitalWrite(greenLED, HIGH);
  delay(333);
  digitalWrite(greenLED, LOW);
  delay(4000);

  //AS (Name Initials)
  digitalWrite(blueLED, HIGH);//A
  delay(333);
  digitalWrite(blueLED, LOW);
  delay(333);
  digitalWrite(blueLED, HIGH);
  delay(999);
  digitalWrite(blueLED, LOW);
  delay(999);
  digitalWrite(blueLED, HIGH);//S
  delay(333);
  digitalWrite(blueLED, LOW);
  delay(333);
  digitalWrite(blueLED, HIGH);
  delay(333);
  digitalWrite(blueLED, LOW);
  delay(333);
  digitalWrite(blueLED, HIGH);
  delay(333);
  digitalWrite(blueLED, LOW);
  delay(4000);
}
