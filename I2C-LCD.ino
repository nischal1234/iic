//For IIC-Cloud computing and IoT
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // leave all paramter default

void setup()
{

	lcd.begin();


	lcd.backlight();
	lcd.clear();
	lcd.setCursor(4,0);
	lcd.print("Hello IIC");
  delay(10000);
}

void loop()
{
lcd.setCursor(0,0);
	lcd.print("Hello World!");
}
