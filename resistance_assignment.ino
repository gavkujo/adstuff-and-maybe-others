// voltage reading exercise. circuit analysis using 2 resistors

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
  // im dividing the read value by 5/1023 cuz like for some reason it reads 5V as 1023 which is way off.
  // also no i did not set it up wrong. this thing has happened to everyone
  V2 = (5./1023.)*val;
  Serial.println(V2);
  delay(del);

}
