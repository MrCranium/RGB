const int LEDR = 11;
const int LEDG = 9;
const int LEDB = 10;
int i = 0;
int wait = 5;

void setup(){
  pinMode(LEDR, OUTPUT);
  pinMode(LEDG, OUTPUT);
  pinMode(LEDB, OUTPUT);
}

void loop(){
    for(i = 0; i < 255; i++) {
    analogWrite(LEDR, i);
    delay(wait);
  }
  
  for(i = 255; i > 0; i--){
    analogWrite(LEDR, i);
    delay(wait);
    digitalWrite(LEDR, LOW);
  }
  
    for(i = 0; i < 255; i++) {
    analogWrite(LEDG, i);
    delay(wait);
  }
  
  for(i = 255; i > 0; i--){
    analogWrite(LEDG, i);
    delay(wait);
    digitalWrite(LEDG, LOW);
  }
  
    for(i = 0; i < 255; i++) {
    analogWrite(LEDB, i);
    delay(wait);
  }
  
  for(i = 255; i > 0; i--){
    analogWrite(LEDB, i);
    delay(wait);
    digitalWrite(LEDB, LOW);
  }
}
