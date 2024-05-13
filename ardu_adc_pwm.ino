const int potPin = A0;   // Pin analógico para el potenciómetro
const int ledPin = 6;    // Pin PWM para el LED
int potValue = 0;
int brightness = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Leer el valor del potenciómetro (entre 0 y 1023)
  potValue = analogRead(potPin);

  // Convertir el valor del potenciómetro a un valor PWM (entre 0 y 255)
  brightness = map(potValue, 0, 1023, 0, 255);

  // Establecer el brillo del LED
  analogWrite(ledPin, brightness);
  
  // Esperar un breve momento antes de volver a leer el valor del potenciómetro
  delay(10);
}