#include<reg52.h>
void delay();
char arr[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};
void main()
{
unsigned char count=0;
P2=0x00;
P3=0x0f;
while(1)
{
count=P3; 
count=count&0X0F;
P2=arr[count];
delay();
delay();
}
}
void delay()
{
int i;
for(i=0;i<30000;i++){}
}
