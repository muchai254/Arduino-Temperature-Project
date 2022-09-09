#include <LiquidCrystal.h>

LiquidCrystal lcd(2, 3, 4, 5, 6, 7);
const int sensor=A0; // Assigning analog pin A5 to variable 'sensor'
  float tempc; //variable to store temperature in degree Celsius
  float tempf; //variable to store temperature in Fahreinheit
  float vout; //temporary variable to hold sensor reading
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  pinMode(sensor,INPUT); // Configuring sensor pin as input

Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  vout=analogRead(sensor); //Reading the value from sensor
vout=(vout*500)/1023;
tempc=vout; // Storing value in Degree Celsius
Serial.println(tempc);
    lcd.setCursor(2, 0);
    lcd.print("Temp: ");
     lcd.print(tempc);
     delay(1000);
     lcd.clear();
  

  

}
