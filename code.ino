PinMode(6, INPUT);
PinMode(7, INPUT);
PinMode(8, OUTPUT);
PinMode(9, OUTPUT);
PinMode(10, OUTPUT);
PinMode(11, OUTPUT);
PinMode(12, OUTPUT);
PinMode(13, OUTPUT);
Serial.begin(9600);
#include <software serial.h>
#include <liquid crystal.h>
PinMode(rx pin, input);
PinMode(txpin, output);
char = data
    Void
    setup()
{
  PinMode(2, INPUT);
  PinMode(3, INPUT);
  PinMode(3, INPUT);
  PinMode(4, INPUT);
  PinMode(5, INPUT);
  lcd.begin(16, 2);
}
Void loop()
{
  data = serial.read();
  lcd.write(data);
  serial.write(data);
  if (data == 'a')
  {
    digital write(2, high);
    digital write(3, low);
    digital write(4, low);
    digital write(5, low);
    digital write(6, low);
    digital write(7, low);
    digital write(8, low);
    digital write(9, high);
    digital write(10, high);
    digital write(11, high);
    digital write(12, high);
    digital write(13, high);
    delay(1000)
  }
  if (data == 'b')
  {
    digital write(2, high);
    digital write(3, high);
    digital write(4, low);
    digital write(5, low);
    digital write(6, low);
    digital write(7, low);
    digital write(8, low);
    digital write(9, low);
    digital write(10, high);
    digital write(11, high);
    digital write(12, high);
    digital write(13, high);
    delay(1000)
  }
  if (data == 'c')
  {
    digital write(2, high);
    digital write(3, low);
    digital write(4, low);
    digital write(5, high);
    digital write(6, low);
    digital write(7, low);
    digital write(8, low);
    digital write(9, high);
    digital write(10, high);
    digital write(11, low);
    digital write(12, high);
    digital write(13, high);
    delay(1000)
  }
  if (data == 'd')
  {
    digital write(2, high);
    digital write(3, low);
    digital write(4, low);
    digital write(5, high);
    digital write(6, high);
    digital write(7, low);
    digital write(8, low);
    digital write(9, high);
    digital write(10, high);
    digital write(11, low);
    digital write(12, low);
    digital write(13, high);
    delay(1000)
  }
  if (data == 'e')
  {
    digital write(2, high);
    digital write(3, low);
    digital write(4, low);
    digital write(5, low);
    digital write(6, high);
    digital write(7, low);
    digital write(8, low);
    digital write(9, high);
    digital write(10, high);
    digital write(11, high);
    digital write(12, low);
    digital write(13, high);
    delay(1000)
  }
  if (data == 'f')
  {
    digital write(2, high);
    digital write(3, high);
    digital write(4, low);
    digital write(5, high);
    digital write(6, low);
    digital write(7, low);
    digital write(8, low);
    digital write(9, low);
    digital write(10, high);
    digital write(11, low);
    digital write(12, high);
    digital write(13, high);
    delay(1000)
  }
  if (data == 'g')
  {
    digital write(2, high);
    digital write(3, high);
    digital write(4, low);
    digital write(5, high);
    digital write(6, high);
    digital write(7, low);
    digital write(8, low);
    digital write(9, low);
    digital write(10, high);
    digital write(11, low);
    digital write(12, low);
    digital write(13, high);
    delay(1000)
  }
  if (data == 'h')
  {
    digital write(2, high);
    digital write(3, high);
    digital write(4, low);
    digital write(5, low);
    digital write(6, high);
    digital write(7, low);
    digital write(8, low);
    digital write(9, low);
    digital write(10, high);
    digital write(11, high);
    digital write(12, low);
    digital write(13, high);
    delay(1000)
  }
  if (data == 'i')
  {
    digital write(2, low);
    digital write(3, high);
    digital write(4, low);
    digital write(5, high);
    digital write(6, low);
    digital write(7, low);
    digital write(8, high);
    digital write(9, low);
    digital write(10, high);
    digital write(11, low);
    digital write(12, high);
    digital write(13, high);
    delay(1000)
  }
  if (data == 'j')
  {
    digital write(2, low);
    digital write(3, high);
    digital write(4, low);
    digital write(5, low);
    digital write(6, low);
    digital write(7, low);
    digital write(8, high);
    digital write(9, low);
    digital write(10, high);
    digital write(11, low);
    digital write(12, low);
    digital write(13, high);
    delay(1000)
  }
  if (data == 'k')
  {
    digital write(2, high);
    digital write(3, low);
    digital write(4, high);
    digital write(5, low);
    digital write(6, low);
    digital write(7, low);
    digital write(8, low);
    digital write(9, high);
    digital write(10, low);
    digital write(11, high);
    digital write(12, high);
    digital write(13, high);
    delay(1000)
  }
  if (data == 'a')
  {
    digital write(2, high);
    digital write(3, high);
    digital write(4, high);
    digital write(5, low);
    digital write(6, low);
    digital write(7, low);
    digital write(8, low);
    digital write(9, low);
    digital write(10, low);
    digital write(11, high);
    digital write(12, high);
    digital write(13, high);
    delay(1000)
  }
  if (data == 'm')
  {
    digital write(2, high);
    digital write(3, low);
    digital write(4, high);
    digital write(5, high);
    digital write(6, low);
    digital write(7, low);
    digital write(8, low);
    digital write(9, high);
    digital write(10, low);
    digital write(11, low);
    digital write(12, high);
    digital write(13, high);
    delay(1000)
  }
  if (data == 'n')
  {
    digital write(2, high);
    digital write(3, low);
    digital write(4, high);
    digital write(5, high);
    digital write(6, high);
    digital write(7, low);
    digital write(8, low);
    digital write(9, high);
    digital write(10, low);
    digital write(11, low);
    digital write(12, low);
    digital write(13, high);
    delay(1000)
  }
  if (data == 'o')
  {
    digital write(2, high);
    digital write(3, low);
    digital write(4, high);
    digital write(5, low);
    digital write(6, high);
    digital write(7, low);
    digital write(8, low);
    digital write(9, high);
    digital write(10, low);
    digital write(11, high);
    digital write(12, low);
    digital write(13, high);
    delay(1000)
  }
  if (data == 'p')
  {
    digital write(2, high);
    digital write(3, high);
    digital write(4, high);
    digital write(5, high);
    digital write(6, low);
    digital write(7, low);
    digital write(8, low);
    digital write(9, low);
    digital write(10, low);
    digital write(11, low);
    digital write(12, high);
    digital write(13, high);
    delay(1000)
  }
  if (data == 'q')
  {
    digital write(2, high);
    digital write(3, high);
    digital write(4, high);
    digital write(5, high);
    digital write(6, high);
    digital write(7, low);
    digital write(8, low);
    digital write(9, low);
    digital write(10, low);
    digital write(11, low);
    digital write(12, low);
    digital write(13, high);
    delay(1000)
  }
  if (data == 'r')
  {
    digital write(2, high);
    digital write(3, high);
    digital write(4, high);
    digital write(5, low);
    digital write(6, high);
    digital write(7, low);
    digital write(8, low);
    digital write(9, low);
    digital write(10, low);
    digital write(11, high);
    digital write(12, low);
    digital write(13, high);
    delay(1000)
  }
  if (data == 's')
  {
    digital write(2, low);
    digital write(3, high);
    digital write(4, high);
    digital write(5, high);
    digital write(6, low);
    digital write(7, low);
    digital write(8, high);
    digital write(9, low);
    digital write(10, low);
    digital write(11, low);
    digital write(12, high);
    digital write(13, high);
    delay(1000)
  }
  if (data == 't')
  {
    digital write(2, low);
    digital write(3, high);
    digital write(4, high);
    digital write(5, high);
    digital write(6, high);
    digital write(7, low);
    digital write(8, high);
    digital write(9, low);
    digital write(10, low);
    digital write(11, low);
    digital write(12, low);
    digital write(13, high);
    delay(1000)
  }
  if (data == 'u')
  {
    digital write(2, high);
    digital write(3, low);
    digital write(4, high);
    digital write(5, low);
    digital write(6, low);
    digital write(7, high);
    digital write(8, low);
    digital write(9, high);
    digital write(10, low);
    digital write(11, high);
    digital write(12, high);
    digital write(13, low);
    delay(1000)
  }
  if (data == 'v')
  {
    digital write(2, high);
    digital write(3, high);
    digital write(4, high);
    digital write(5, low);
    digital write(6, low);
    digital write(7, high);
    digital write(8, low);
    digital write(9, low);
    digital write(10, low);
    digital write(11, high);
    digital write(12, high);
    digital write(13, low);
    delay(1000)
  }
  if (data == 'w')
  {
    digital write(2, low);
    digital write(3, high);
    digital write(4, low);
    digital write(5, high);
    digital write(6, high);
    digital write(7, high);
    digital write(8, high);
    digital write(9, low);
    digital write(10, high);
    digital write(11, low);
    digital write(12, low);
    digital write(13, low);
    delay(1000)
  }
  if (data == 'x')
  {
    digital write(2, high);
    digital write(3, low);
    digital write(4, high);
    digital write(5, high);
    digital write(6, low);
    digital write(7, high);
    digital write(8, low);
    digital write(9, high);
    digital write(10, low);
    digital write(11, low);
    digital write(12, high);
    digital write(13, low);
    delay(1000)
  }
  if (data == 'y')
  {
    digital write(2, high);
    digital write(3, low);
    digital write(4, high);
    digital write(5, high);
    digital write(6, high);
    digital write(7, high);
    digital write(8, low);
    digital write(9, high);
    digital write(10, low);
    digital write(11, low);
    digital write(12, low);
    digital write(13, low);
    delay(1000)
  }
  if (data == 'z')
  {
    digital write(2, high);
    digital write(3, low);
    digital write(4, high);
    digital write(5, low);
    digital write(6, high);
    digital write(7, high);
    digital write(8, low);
    digital write(9, high);
    digital write(10, low);
    digital write(11, high);
    digital write(12, low);
    digital write(13, low);
    delay(1000)
  }
If(digitalRead(2)==1;
  digital Read(3)==0;
  digital Read(4)==0;
  digital Read(5)==0;
  digital Read(6)==0;
 digital Read(7)==0;
         {lcd.println(“a”)}
If(digitalRead(2)==1;
  digital Read(3)==1;
  digital Read(4)==0;
  digital Read(5)==0;
  digital Read(6)==0;
  digital Read(7)==0;
  {lcd.println(“b”)}
If(digitalRead(2)==1;
     digital Read(3)==0;
     digital Read(4)==0;
     digital Read(5)==1;
 digital Read(6)==0;
 digital Read(7)==0;
 {lcd.println(“c”)}
If(digitalRead(2)==1;
  digital Read(3)==0;
  digital Read(4)==0;
  digital Read(5)==1;
  digital Read(6)==1;
  digital Read(7)==0;
         {lcd.println(“d”)}
If(digitalRead(2)==1;
  digital Read(3)==0;
  digital Read(4)==0;
  digital Read(5)==0;
  digital Read(6)==1;
digital Read(7)==0;
  {lcd.println(“e”)}
If(digitalRead(2)==1;
  digital Read(3)==1;
  digital Read(4)==0;
  digital Read(5)==1;
  digital Read(6)==0;
digital Read(7)==0;
  {lcd.println(“f”)}
If(digitalRead(2)==1;
         digital Read(3)==1;
     digital Read(4)==0;
     digital Read(5)==1;
     digital Read(6)==1;
     digital Read(7)==0;
     {lcd.println(“g”)}

If(digitalRead(2)==1;
  digital Read(3)==1;
  digital Read(4)==0;
  digital Read(5)==0;
     digital Read(6)==1;
     digital Read(7)==0;
    {lcd.println(“h”)}

If(digitalRead(2)==0;
        digital Read(3)==1;
        digital Read(4)==0;
        digital Read(5)==1;
        digital Read(6)==0;
        digital Read(7)==0;
        {lcd.println(“i”)}
If(digitalRead(2)==0;
digital Read(3)==1;
digital Read(4)==0;
digital Read(5)==1;
            digital Read(6)==1;
digital Read(7)==0;
{lcd.println(“j”)}

If(digitalRead(2)==1;
     digital Read(3)==0;
     digital Read(4)==1;
     digital Read(5)==0;
     digital Read(6)==0;
  digital Read(7)==0;
 {lcd.println(“k”)}

If(digitalRead(2)==1;
     digital Read(3)==1;
   digital Read(4)==1;
     digital Read(5)==0;
     digital Read(6)==0;
   digital Read(7)==0;
     {lcd.println(“l”)}
If(digitalRead(2)==1;
     digital Read(3)==0;
     digital Read(4)==1;
     digital Read(5)==1;
         digital Read(6)==0;
         digital Read(7)==0;
        {lcd.println(“m”)}

If(digitalRead(2)==1;
  digital Read(3)==0;
  digital Read(4)==1;
  digital Read(5)==1;
  digital Read(6)==1;
digital Read(7)==0;
  {lcd.println(“n”)}
If(digitalRead(2)==1;
         digital Read(3)==0;
         digital Read(4)==1;
         digital Read(5)==0;
         digital Read(6)==1;
         digital Read(7)==0;
         {lcd.println(“o”)}
If(digitalRead(2)==1;
  digital Read(3)==1;
  digital Read(4)==1;
  digital Read(5)==1;
  digital Read(6)==0;
         digital Read(7)==0;
         {lcd.println(“p”)}
If(digitalRead(2)==1;
  digital Read(3)==1;
  digital Read(4)==1;
  digital Read(5)==1;
  digital Read(6)==1;
     digital Read(7)==0;
     {lcd.println(“q”)}
If(digitalRead(2)==1;
  digital Read(3)==1;
     digital Read(4)==1;
     digital Read(5)==0;
     digital Read(6)==1;
   digital Read(7)==0;
    {lcd.println(“r”)}
If(digitalRead(2)==0;
     digital Read(3)==1;
     digital Read(4)==1;
     digital Read(5)==1;
     digital Read(6)==0;
   digital Read(7)==0;
    {lcd.println(“s”)}
If(digitalRead(2)==0;
     digital Read(3)==1;
     digital Read(4)==1;
     digital Read(5)==1;
     digital Read(6)==1;
   digital Read(7)==0;
     {lcd.println(“t”)}
If(digitalRead(2)==1;
     digital Read(3)==0;
     digital Read(4)==1;
     digital Read(5)==0;
     digital Read(6)==0;
     digital Read(7)==1;
   {lcd.println(“u”)}
If(digitalRead(2)==1;
     digital Read(3)==1;
     digital Read(4)==1;
     digital Read(5)==0;
     digital Read(6)==0;
     digital Read(7)==1;
   {lcd.println(“v”)}

If(digitalRead(2)==0;
     digital Read(3)==1;
     digital Read(4)==0;
  digital Read(5)==1;
  digital Read(6)==1;
  digital Read(7)==1;
 {lcd.println(“w”)}
If(digitalRead(2)==1;
  digital Read(3)==0;
  digital Read(4)==1;
  digital Read(5)==1;
  digital Read(6)==0;
 digital Read(7)==1;
       {lcd.println(“x”)}
If(digitalRead(2)==1;
  digital Read(3)==0;
      digital Read(4)==1;
      digital Read(5)==1;
      digital Read(6)==1;
digital Read(7)==1;
       {lcd.println(“y”)}
If(digitalRead(2)==1;
   digital Read(3)==0;
  digital Read(4)==1;
  digital Read(5)==0;
  digital Read(6)==1;
 digital Read(7)==1; 

     {
    lcd.println(“z”)}
