/**
 * Regulador de luz
 * 
 * @author Miguel Ángel Abellán
 * @company Programo Ergo Sum
 * @license Creative Commons. Reconocimiento CompartirIgual 4.0
 */

void setup() {
  pinMode(9, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  int valor = analogRead(0);
  valor = map(valor, 0, 1023, 0, 255);

  analogWrite(9, valor);
  analogWrite(6, valor);
  analogWrite(5, valor);
  delay(15);
}