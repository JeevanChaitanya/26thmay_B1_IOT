void setup() {
 pinMode(13,OUTPUT);

}

void loop() {
  tone(13,1000);
  delay(2000);
  noTone(13);
  delay(5000);
  tone(13,600);
  delay(4000);
  noTone(13);
  delay(10000);
  tone(13,200);
  delay(6000);
  noTone(13);
  delay(15000);
  
}
