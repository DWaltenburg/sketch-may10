#include <LiquidCrystal.h>
#include <dht11.h>


dht11 DHT11;
#define DHT11PIN 7

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 2, d5 = 3, d6 = 4, d7 = 5;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  }

void loop() {
  int chk = DHT11.read(DHT11PIN);
  lcd.setCursor(0, 0);
  lcd.print("Temperature = ");
  lcd.print(DHT11.temperature);

  lcd.setCursor(0, 1);
  lcd.print("Humidity = ");
  lcd.print(DHT11.humidity);
  }
