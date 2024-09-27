//////// Pin ////////
const int LED = 3;
const int PB = 4;
const int SW = 5;

// Blink LED
void blink(int pin, int time, int delayTime) {
  for (int i = 0; i < time; i++) {
    digitalWrite(pin, HIGH);
    delay(delayTime);
    digitalWrite(pin, LOW);
    delay(delayTime);
  }
}

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(PB, INPUT_PULLUP);
  pinMode(SW, INPUT);
}

void loop() {
  // Button is pressed
  if (digitalRead(PB) == LOW) {
    char direction = digitalRead(SW) == LOW ? 'r' : 'l'; 

    // Go left, blink 1 time
    if (direction == 'l') {
      blink(LED, 1, 1000);
    }
    // Go right, blink 2 times
    else if (direction == 'r') {
      blink(LED, 2, 1000);
    }
  }
}
