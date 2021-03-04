//3 Input AND Logic
//by Aldrick Victor Tadeo Arellano
//MAR 2021

const int input_pin0 = 1; 
const int input_pin1 = 2;
const int input_pin2 = 3;

int INPUT0;
int INPUT1;
int INPUT2;

void setup() {
  pinMode(input_pin0, INPUT);
  pinMode(input_pin1, INPUT);
  pinMode(input_pin2, INPUT);

  pinMode(0, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  INPUT0 = digitalRead(input_pin0);
  INPUT1 = digitalRead(input_pin1);
  INPUT2 = digitalRead(input_pin2);
  
  if (INPUT0==1 && INPUT1==1){  
    digitalWrite(4, HIGH);
    digitalWrite(6, HIGH);
  }

  if (INPUT0==0 || INPUT1==0){
    digitalWrite(4, LOW);
    digitalWrite(6, LOW);
  }

  if (INPUT1==1 && INPUT2==1){
	  digitalWrite(0, HIGH);
    digitalWrite(5, HIGH);
  }

  if (INPUT1==0 || INPUT2==0){
	  digitalWrite(0, LOW);
    digitalWrite(5, LOW);
  }
  
  else {
    digitalWrite(0, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
  }
}
