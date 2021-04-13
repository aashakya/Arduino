int dotDelay=200;
int ledPin=7;

char* numbers[]={'.-','-...','-.-.','-..'};

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  char ch;
  ch=Serial.read();
  Serial.print(ch);
  if (ch>='0' && ch<='9'){
    flashSequence(numbers[ch-'0']);
  }
  else if (ch==' '){
    delay(dotDelay*4);
  }
}

void flashSequence(char * sequence){
  int i=0;
  while (sequence[i]!='\0'){
    flashDotOrDash(sequence[i]);
    i++;
  }
  delay(dotDelay*5);
}

void flashDotOrDash(char dotOrDash){
  digitalWrite(ledPin,HIGH);
  if (dotOrDash=='.'){
    delay(dotDelay);
    Serial.print(dotOrDash);
  }
  else {
    delay(dotDelay*3);
  }
  digitalWrite(ledPin, LOW);
  delay(dotDelay);
}
