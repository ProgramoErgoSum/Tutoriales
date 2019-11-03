/**
 * Led RGB (ánodo común)
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
  analogWrite(9, 0);
  analogWrite(6, 255);
  analogWrite(5, 255);
  delay(1000);
  analogWrite(9, 255);
  analogWrite(6, 0);
  analogWrite(5, 255);
  delay(1000);
  analogWrite(9, 255);
  analogWrite(6, 255);
  analogWrite(5, 0);
  delay(1000);
}