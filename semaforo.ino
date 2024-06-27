#define LEDVERMELHO 16
#define LEDVERMELHO1 27
#define LEDAMARELO 17
#define LEDAMARELO1 26
#define LEDVERDE 5
#define LEDVERDE1 25
#define TRIG 32
#define ECHO 33

void setup() {
  pinMode(LEDVERMELHO, OUTPUT);
  pinMode(LEDVERMELHO1, OUTPUT);
  pinMode(LEDAMARELO, OUTPUT);
  pinMode(LEDAMARELO1, OUTPUT);
  pinMode(LEDVERDE, OUTPUT);
  pinMode(LEDVERDE1, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(TRIG, OUTPUT);
}

void loop() {
 digitalWrite(TRIG, HIGH);
  delay(1);
    digitalWrite(TRIG, LOW);
  
int distancia = pulseIn(ECHO, HIGH) * 0.0345/2;


if (distancia > 15){
  digitalWrite(LEDVERDE1, HIGH);
  digitalWrite(LEDVERMELHO, HIGH);
}

else if(distancia < 15){

  digitalWrite(LEDVERMELHO, HIGH);
  digitalWrite(LEDVERDE1,HIGH);
delay(4000);
digitalWrite(LEDAMARELO1, HIGH);
digitalWrite(LEDVERDE1, LOW);
delay(4000);
digitalWrite(LEDVERMELHO, LOW);
digitalWrite(LEDVERDE, HIGH);
digitalWrite(LEDVERMELHO1, HIGH);
digitalWrite(LEDAMARELO1, LOW);
delay(4000);
digitalWrite(LEDAMARELO, HIGH);
digitalWrite(LEDVERDE, LOW);
delay(4000);
digitalWrite(LEDVERMELHO1, LOW);
digitalWrite(LEDAMARELO, LOW);
delay(100);
}

}
