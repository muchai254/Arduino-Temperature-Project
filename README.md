# Temp Sensing through LM35 module and a 16,2 LCD Display
### Requirements:
1. Arduino Uno
1. 16, 2 LCD display
1. Breadboard
1. Potentiometer
1. LM35 Temperature sensor
1. Jumper wires

With the LM35 on `pin A0` , lets start
>Import the `LiquidCrystal` library like this:
```C++
#include <LiquidCrystal.h>
```
>Initialize the library by passing the values of the `rs`, `en`, `d4`, `d5`, `d6` and `d7` pins respectively like this:

```C++
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);
```

>Create a variable to store the temperature value in Celcius
```C++
 float tempc;
 ```
>Setup the LCD Library and tell it how large the screen is


```C++
void setup(){
    lcd.begin(16, 2);
    pinMode(A0,INPUT);
}
```
>In the `void loop()`, let us now calculate the temperature in degrees celsius and also print this on the LCD display
```C++
void loop(){
    vout=analogRead(A0); //Reading the value from sensor
    vout=(vout*500)/1023;
    tempc=vout; // Storing value in Degree Celsius
    lcd.setCursor(2, 0);
    lcd.print("Temp: ");
    lcd.print(tempc);
    delay(1000);
    lcd.clear();
}
```