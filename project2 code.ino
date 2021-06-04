#include<LiquidCrystal.h>
LiquidCrystal lcd(10,9,5,4,3,2);
byte sad[8]{
  0b00000,
  0b10001,
  0b00000,
  0b00100,
  0b00000,
  0b01110,
  0b10001,
  0b00000,
 
};
byte smiley[8]{
  0b00000,
  0b10001,
  0b00000,
  0b00100,
  0b00000,
  0b10001,
  0b01110,
  0b00000,

};
void setup() {
  
 pinMode(8,INPUT);

lcd.begin(16,2);

}

void loop() {
  int x = digitalRead(8);
if (x==0)
 {
    lcd.setCursor(1,0);
    lcd.print(" I'M HAPPY");
lcd.createChar(2,smiley);
lcd.setCursor(7,1);
lcd.write(2);
    
 
}
 else
 {

     lcd.setCursor(2,0);
    lcd.print(" I AM SAD");
lcd.createChar(1,sad);
lcd.setCursor(7,1);
lcd.write(1);

 }
}
