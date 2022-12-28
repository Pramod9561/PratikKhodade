#include<reg52.h>
#define dataport P2
sbit rs=P3^0;
sbit rw=P3^1;
sbit e=P3^2;
void lcdcmd(unsigned char value);
void lcddata(unsigned char value);
void delay(unsigned int msec);
void main()
{
delay(200);
lcdcmd(0x38);
delay(20);
lcdcmd(0x0e);
delay(20);
lcdcmd(0x80);
delay(20);
lcddata('S');
delay(20);
lcddata('U');
delay(20);
lcddata('R');
delay(20);
lcddata('A');
delay(20);	
lcddata('J');
delay(20);	
}
void lcdcmd(unsigned char value)
{dataport=value;
rs=0;rw=0;e=1;delay(20);e=0;
}
void lcddata(unsigned char value)
{dataport=value;
rs=1;rw=0;e=1;delay(20);e=0;
}
 void delay(unsigned int msec)
 {
     int i,j;
   for(i=0;i<msec;i++)
   for(j=0;j<135;j++){}
  }
