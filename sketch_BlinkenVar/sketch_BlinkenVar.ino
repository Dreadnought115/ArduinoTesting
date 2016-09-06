int aktuelle_pause = 1000;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(2, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(2) == LOW) {
    aktuelle_pause = 100;
  } else if (digitalRead(4) == LOW) {
    aktuelle_pause = 200;
  } else if (digitalRead(6) == LOW) {
    aktuelle_pause = 400;
  } else {
    aktuelle_pause = 2000;
  }

  digitalWrite(13, HIGH);
  delay(aktuelle_pause);
  digitalWrite(13, LOW);
  delay(aktuelle_pause);
}
