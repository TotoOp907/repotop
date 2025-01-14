// Broche à laquelle la LED est connectée
const int ledPin = 17;

void setup() {
  // Configure la broche de la LED comme sortie
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Allume la LED
  digitalWrite(ledPin, HIGH);
  // Attend 1 seconde
  delay(1000);
  // Éteint la LED
  digitalWrite(ledPin, LOW);
  // Attend 1 seconde
  delay(1000);
}
