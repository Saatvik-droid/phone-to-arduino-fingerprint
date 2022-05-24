String inBytes;

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  while (!Serial){}
  delay(500);
  Serial.println("Ready");
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
}
void loop() {
  while (Serial.available() == 0) {}  
  inBytes = Serial.readString();
  if (inBytes == "1") {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(5000);
  }
  if (inBytes == "2") {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);
  }
  digitalWrite(LED_BUILTIN, LOW);
}
