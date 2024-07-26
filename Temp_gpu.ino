#include "LiquidCrystal.h"

const int sensor=A1; 
const int rs = 1, en = 2, d4 = 4, d5 = 5, d6 = 6, d7 = 7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
float tempf;  
float vout;
float tempc;


void setup()
{
lcd.begin(16,2);
pinMode(sensor,INPUT);
Serial.begin(9600);
}
void loop() {

vout=analogRead(sensor);
vout=(vout*500)/1023;
tempc=vout; 
tempf=(vout*1.8)+32; 
lcd.setCursor(0,0);
lcd.print("Celsius=");
delay(10);

lcd.print(tempc);
lcd.println();
lcd.setCursor(0,1);
lcd.print("Fahrenheit=");
lcd.print(tempf);
lcd.println();
delay(10);
delay(1000);
}
