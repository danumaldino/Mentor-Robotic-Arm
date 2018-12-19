#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
const int r0 = A0;  // joystick
const int r1 = A1;
const int r2 = A2;
const int r3 = A3;
const int r4 = A4;
const int r5 = A5;
const int r6 = A8;  // sensor motor
const int r7 = A9;
const int r8 = A10;
const int r9 = A11;
const int r10 = A12;
const int r11 = A13;
const int m1t = 53; //motor 1
const int m1k = 52;
const int m2t = 51; //motor 2,
const int m2k = 50;
const int m3t = 49; //motor 3 
const int m3k = 48;
const int m4t = 47; //motor 4
const int m4k = 46;
const int m5t = 45; //motor 5
const int m5k = 44;
const int m6t = 43; //motor 6
const int m6k = 42;

int s1,s2,s3,s4,s5,s6,ss1,ss2,ss3,ss4,ss5,ss6,i,x,y,z;
int d1,d2,d3,d4,d5,d6,ds1,ds2,ds3,ds4,ds5,ds6,r1k,r1t,r2k,r2t,r3k,r3t,r4k,r4t;
int ask3,ast3,za;

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{

  pinMode(m1t, OUTPUT);
  pinMode(m1k, OUTPUT);
  pinMode(m2t, OUTPUT);
  pinMode(m2k, OUTPUT);
  pinMode(m3t, OUTPUT);
  pinMode(m3k, OUTPUT);
  pinMode(m4t, OUTPUT);
  pinMode(m4k, OUTPUT);
  pinMode(m5t, OUTPUT);
  pinMode(m5k, OUTPUT);
  pinMode(m6t, OUTPUT);
  pinMode(m6k, OUTPUT);
   
  // initialize the LCD
  lcd.begin();
  // Turn on the blacklight and print a message.
  lcd.backlight();
  lcd.print("");
  Serial.begin(9600);
  
}

void kiwo5() //motor5
  {
 digitalWrite(m5k, LOW);
 digitalWrite(m5t, HIGH);
    }

void tengen5() 
  {   
 digitalWrite(m5k, HIGH);
 digitalWrite(m5t, LOW);
    }

void rem5()
  {  
 digitalWrite(m5k, HIGH);
 digitalWrite(m5t, HIGH);
     }

void kiwo4() //motor4
  {
 digitalWrite(m4k, LOW);
 digitalWrite(m4t, HIGH);
    }

void tengen4()
  {
 digitalWrite(m4k, HIGH);
 digitalWrite(m4t, LOW);
   }

void rem4()
  {
 digitalWrite(m4k, HIGH);
 digitalWrite(m4t, HIGH);
    }


void kiwo3() //motor3
  {
 digitalWrite(m3k, LOW);
 digitalWrite(m3t, HIGH);
    }

void tengen3()
  {
 digitalWrite(m3k, HIGH);
 digitalWrite(m3t, LOW);
    }

void rem3()
  {
 digitalWrite(m3k, HIGH);
 digitalWrite(m3t, HIGH);
    }

void kiwo2() //motor2
  {
 digitalWrite(m2k, LOW);
 digitalWrite(m2t, HIGH);
   }

void tengen2()
  {
 digitalWrite(m2k, HIGH);
 digitalWrite(m2t, LOW);
   }

void rem2()
  {
 digitalWrite(m2k, HIGH);
 digitalWrite(m2t, HIGH);
   }
    
void kiwo1() //motor1
  {
 digitalWrite(m1k, LOW);
 digitalWrite(m1t, HIGH);
   }

void tengen1()
  {
 digitalWrite(m1k, HIGH);
 digitalWrite(m1t, LOW);
   }

void rem1()
  {
 digitalWrite(m1k, HIGH);
 digitalWrite(m1t, HIGH);
   }

void kiwo() //Motor6
  {
 digitalWrite(m6k, LOW);
 digitalWrite(m6t, HIGH);
   }

void tengen()
  {
   
 digitalWrite(m6k, HIGH);
 digitalWrite(m6t, LOW);
   }

void rem()
  {
 digitalWrite(m6k, HIGH);
 digitalWrite(m6t, HIGH);
   }

void lengan5()
{
 s1=analogRead(r0); //ok
 s2=analogRead(r5); //ok
 s3=analogRead(r1); //ok
 s4=analogRead(r2); //ok
 s5=analogRead(r3); //ok
 s6=analogRead(r4); //ok
 ss1=analogRead(r9); //ok 
 ss2=analogRead(r11); //ok
 ss3=analogRead(r10);//ok
 ss4=analogRead(r8);//ok
 ss5=analogRead(r6); //ok
 ss6=analogRead(r7); //ok 

 
 d3=(s3-350)*10/37;
 ds3=(620-ss3)/3;
 r3k=ds3-d3;
 r3t=d3-ds3;


if(d3>ds3 && r3t>5)
{kiwo5();}
else if(d3<ds3 && r3k>5)
{
  tengen5(); }
else if(r3t<5 && r3k<5)
{
  rem5();
  }
  

lcd.setCursor(0,0); 
 lcd.print(d3);
 lcd.setCursor(5,0); 
 lcd.print(ds3);
 lcd.setCursor(0,1); 
  lcd.print(s3);
   lcd.setCursor(5,1);
  lcd.print(ss3);

 
  delay(10);
 lcd.clear();

  }

///////////////////siku
void lengan3()
{
 s4=analogRead(r2); //ok
 ss4=analogRead(r8);//ok
  
 d4=(s4-300)*10/18;
 ds4=(600-ss4)*10/16;
 r4k=ds4-d4; 
 r4t=d4-ds4;

 
if(d4>ds4 && r4t>10)
{kiwo4();
 
}
if(d4<ds4 && r4k>10)
{
  tengen4();
  
  }
else if(r4t<=10 && r4k<=10)  
{                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
  rem4(); rem1();  rem2(); rem3(); rem4(); delay(300);x=0;}
 }
  
void kaki()
{
  
 s1=analogRead(r0); //ok
 s2=analogRead(r5); //ok
 s3=analogRead(r1); //ok
 s4=analogRead(r2); //ok
 s5=analogRead(r3); //ok
 s6=analogRead(r4); //ok
 ss1=analogRead(r9);        //ok ok
 ss2=analogRead(r11); //ok
 ss3=analogRead(r10);//ok
 ss4=analogRead(r8);//ok
 ss5=analogRead(r6); //ok
 ss6=analogRead(r7); //ok ok
 
 d2=(s2-345)/4;   
 ds2=(620-ss2)/3; 
 r2k=d2-ds2; 
 r2t=ds2-d2;

  if(d2>ds2 && r2k>4) 
 {
  kiwo();
  }
  else if(d2<ds2 && r2t>4)
  {
    tengen();
    }
    else if(r2k <10 && r2t<10 )
    {
      rem(); rem1(); rem2(); rem3(); rem4();  delay(10);
x=1;

  }
}
void grip()
{
 s1=analogRead(r0); //ok
 s2=analogRead(r5); //ok
 s3=analogRead(r1); //ok
 s4=analogRead(r2); //ok
 s5=analogRead(r3); //ok
 s6=analogRead(r4); //ok
 ss1=analogRead(r9);        //ok ok
 ss2=analogRead(r11); //ok
 ss3=analogRead(r10);//ok
 ss4=analogRead(r8);//ok
 ss5=analogRead(r6); //ok
 ss6=analogRead(r7); //ok ok  

///////////////M1 DAN M2
r1k=ss5-s5;r1t=s5-ss5; //
r2k=s6-ss6;r2t=ss6-s6; //

if(s5>ss5 && r1k<10 && ss5<1023)
{ kiwo1();}
else if (s5<ss5 && r1t<10 && ss5<1023)
{ tengen1();}
else if (s5==s5)
{ rem1();
delay(100);
  } 

if(s6<ss6 && r2t<10 )
{ kiwo2();}
else if (s6>ss6 && r2k>5 )
{ tengen2();}

else if (r2k<10 && r2t>5)
{ rem2();
delay(100);
  }

////////////////////M4
if(s1>ss1 )
{ kiwo3();}
else if (s1<ss1 )
{ tengen3();}
else if (r1k<10 && r1t<10)
{ rem3();
delay(100);
  }
  
Serial.println(s1);

Serial.println(ss1);
Serial.println(s6);
Serial.println(ss6);

Serial.println(s5);
Serial.println(ss5);
delay(1000);
/*
lcd.setCursor(0,0);
 lcd.print(s5);
 lcd.setCursor(5,0);
 lcd.print(ss5);
 lcd.setCursor(0,1);
  lcd.print(s6);
   lcd.setCursor(5,1);
  lcd.print(ss6);
*/
 
  delay(10);
 lcd.clear();


}  

void jalan()
{
switch(x) 
{
  case 0:
 s1=analogRead(r0); //ok
 s2=analogRead(r5); //ok
 s3=analogRead(r1); //ok
 s4=analogRead(r2); //ok
 s5=analogRead(r3); //ok
 s6=analogRead(r4); //ok
 ss1=analogRead(r9);        //ok ok
 ss2=analogRead(r11); //ok
 ss3=analogRead(r10);//ok
 ss4=analogRead(r8);//ok
 ss5=analogRead(r6); //ok
 ss6=analogRead(r7); //ok ok
 
 d2=(s2-345)/4;   
 ds2=(620-ss2)/3; 
 r2k=d2-ds2; 
 r2t=ds2-d2;

  if(d2>ds2 && r2k>4) 
 {
  kiwo();
  }
  else if(d2<ds2 && r2t>4)
  {
    tengen();
    }
    else if(r2k <4 && r2t <4 )
    {
      rem(); rem1(); rem2(); rem3(); rem4();  delay(10);
x=1; 

  }  
  break; 
  case 1:
 
 s1=analogRead(r0); //ok
 s2=analogRead(r5); //ok
 s3=analogRead(r1); //ok
 s4=analogRead(r2); //ok
 s5=analogRead(r3); //ok
 s6=analogRead(r4); //ok
 ss1=analogRead(r9);        //ok ok
 ss2=analogRead(r11); //ok
 ss3=analogRead(r10);//ok
 ss4=analogRead(r8);//ok
 ss5=analogRead(r6); //ok
 ss6=analogRead(r7); //ok ok
 
 d3=(s3-350)*10/37;
 ds3=(620-ss3)/3; 
 r3k=ds3-d3;
 r3t=d3-ds3;
 
 if(d3>ds3 && r3k<2)
{kiwo5();}
else if(d3<ds3 && r3t<2)
{
  tengen5();
  }
else if(d3 == ds3)
{
  rem5(); rem1(); rem2(); rem3(); rem4();delay(100);x=2;
  }
  
  break;
  case 2:
  ask3=0;
ast3=0;

for(za=0;za<100;za++)
{ s4=analogRead(r2); //ok
 ss4=analogRead(r8);//ok
  
 d4=(s4-300)*10/18;
 ds4=(600-ss4)*10/16;
 r4k=ds4-d4;
 r4t=d4-ds4;

 
 
if(d4>ds4 && r4t>10)
{
  ask3++;
  ast3=0;
  
}

if(d4<ds4 && r4k>10)
{
  ast3++;
  ask3=0;
  
  
  }
  }
 
if(ask3>=100)
{kiwo4();
 
}
else if(ast3>=100)
{
  tengen4();
  
  }
else if(r4t<=10 && r4k<=10)
{                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
  rem4(); rem1();  rem2(); rem3(); rem4(); delay(300);x=0;}
  break;
}
Serial.println(ask3);

Serial.println(ast3);
Serial.println(r4t);

Serial.println(r4k);
}
  
void loop()
{
  /////////////////test motor
//tengen4();
// delay(1000);
// kiwo4();
//delay(1000);


 // jalan();
lengan3();
lengan5();
kaki();
//grip();
/*
 s1=analogRead(r0); //ok
 s2=analogRead(r5); //ok
 s3=analogRead(r1); //ok
 s4=analogRead(r2); //ok
 s5=analogRead(r3); //ok
 s6=analogRead(r4); //ok
 ss1=analogRead(r9);        //ok ok
 ss2=analogRead(r11); //ok
 ss3=analogRead(r10);//ok
 ss4=analogRead(r8);//ok
 ss5=analogRead(r6); //ok
 ss6=analogRead(r7); //ok ok


lcd.setCursor(0,0);
 lcd.print(s3);
 lcd.setCursor(5,0);
 lcd.print(ss3);
 lcd.setCursor(10,0);
lcd.print(d3);
 lcd.setCursor(0,5);
 lcd.print(ds3);


  delay(500);
 lcd.clear();


*/
}
