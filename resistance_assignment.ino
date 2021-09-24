int readPin = A3;
int V2 = 0;
int del = 500;
int val;

void setup() {
  pinMode(readPin, INPUT);
  Serial.begin(9600);

}

void loop() {
  val = analogRead(readPin);
  V2 = (5./1023.)*val;
  Serial.println(V2);
  delay(del);

}
