
void setup() {
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}
 
void loop() {
  ciclo(1, 0);
  ciclo(0, 1);
  ciclo(1, 1);
  parpadeo(1, 0);
  parpadeo(0, 1);
  parpadeo(1, 1);
}

void ciclo(int rojo, int azul){
  digitalWrite(13, rojo);
  digitalWrite(12, azul);

  for(int i=1; i<=4; i++){
    digitalWrite(i, HIGH);
    delay(50);
    digitalWrite(i, LOW);
    delay(50);
  }
}

void parpadeo(int rojo, int azul){
  digitalWrite(13, rojo);
  digitalWrite(12, azul);

  for(int j=0; j<=4; j++){
    for(int i=1; i<=4; i++){
      digitalWrite(i, HIGH);
    }
    delay(50);
    for(int i=1; i<=4; i++){
      digitalWrite(i, LOW);
    }
    delay(50);
  }
}
