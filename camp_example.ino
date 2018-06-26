int led1 = 1;
int led2 = 2;
int led3 = 3;
int led4 = 4;
int js_x = A0;
int js_y = A1;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(js_x, INPUT);
  pinMode(js_y, INPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  int x = analogRead(js_x);
  int y = analogRead(js_y);
  if (x < 100) {
    digitalWrite(led1, HIGH);
  }
  else if (x > 900) {
    digitalWrite(led3, HIGH);
  }
  else {
    digitalWrite(led1, LOW);
    digitalWrite(led3, LOW);
  }

  if (y < 100) {
    digitalWrite(led2, HIGH);
  }
  else if (y > 900) {
    digitalWrite(led4, HIGH);
  }
  else {
    digitalWrite(led2, LOW);
    digitalWrite(led4, LOW);
  }
  delay(100);
}
