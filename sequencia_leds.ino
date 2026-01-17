void setup() {
 pinMode(1,OUTPUT);
 pinMode(2,OUTPUT);
 pinMode(3,OUTPUT);
 pinMode(4,OUTPUT);
 pinMode(5,OUTPUT);
}

void loop() {
  // ligar todos
 digitalWrite(1,HIGH);
 delay(100);
 digitalWrite(1,LOW);
 delay(200);
 digitalWrite(2,HIGH);
 delay(100);
 digitalWrite(2,LOW);
 delay(200);
 digitalWrite(3,HIGH);
 delay(100);
 digitalWrite(3,LOW);
 delay(200);
 digitalWrite(4,HIGH);
 delay(100);
 digitalWrite(4,LOW);
 delay(200);
 digitalWrite(5,HIGH);
 delay(100);
 digitalWrite(5,LOW);
 delay(200);
 // tarefa
 digitalWrite(4,HIGH);
 delay(100);
 digitalWrite(4,LOW);
 delay(200);
 digitalWrite(3,HIGH);
 delay(100);
 digitalWrite(3,LOW);
 delay(200);
 digitalWrite(2,HIGH);
 delay(100);
 digitalWrite(2,LOW);
 delay(200);
}
