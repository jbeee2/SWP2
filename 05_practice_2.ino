#define PIN_LED 7
unsigned int count, toggle;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
  while (!Serial) {
    ;
  }
  digitalWrite(PIN_LED, toggle);
  delay(1000);
  count = toggle = 0;
}



void loop() {
  // put your main code here, to run repeatedly:
  toggle = toggle_state(toggle);
  digitalWrite(PIN_LED, toggle);
  delay(100);
  ++count;
  if (count == 11) {
    while(1) {}
  }
}

int toggle_state(int toggle) {
  return !toggle;
}
