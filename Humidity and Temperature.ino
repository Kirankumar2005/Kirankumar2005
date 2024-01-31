//                                          KIRAN projects
#include "DHT.h"
#define DHTPIN 3 
#define DHTTYPE DHT11 //DHT Sensor Type
DHT dht(DHTPIN, DHTTYPE);
#include<LiquidCrystal_I2C.h> //LCD Display
LiquidCrystal_I2C lcd(0x27, 16, 2); 
void setup() 
{
  dht.begin();
 lcd.backlight();
  lcd.init();
}
void loop() 
{
   lcd.clear();
      lcd.setCursor(0,0);
   lcd.print("Humidity="); // print Humidity
   lcd.print((float)dht.readHumidity()); // Humidity reading
   lcd.print("%");
   lcd.setCursor(0,1); // LCD display second step
   lcd.print("TEMP="); // print TEMPERATURE 
   lcd.print((float)dht.readTemperature());// read Temperature
   delay(2000);// delay in microseconds
   lcd.clear(); // lcd display clear
}