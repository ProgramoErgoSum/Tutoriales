/**
 * Led RGB crepuscular
 * 
 * @author Miguel Ángel Abellán
 * @company Programo Ergo Sum
 * @license Creative Commons. Reconocimiento CompartirIgual 4.0
 */

void setup() {
  pinMode(9, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);

  analogWrite(9, 0);
  analogWrite(6, 0);
  analogWrite(5, 0);
}

void loop() {
  if (analogRead(0) < 300) {
    analogWrite(9, 0);
    analogWrite(6, 255);
    analogWrite(5, 255);
  } else if (analogRead(0) < 600) {
    analogWrite(9, 255);
    analogWrite(6, 0);
    analogWrite(5, 255);
  } else {
    analogWrite(9, 255);
    analogWrite(6, 255);
    analogWrite(5, 0);
  }
}