#include<reg52.h>
sbit Ge=P2^0;
sbit Re=P2^1;
sbit Ye=P2^2;
sbit Gw=P2^3;
sbit Rw=P2^4;
sbit Yw=P2^5;
sbit Gn=P2^6;
sbit Rn=P2^7;
sbit Yn=P3^0;
sbit Gs=P3^1;
sbit Rs=P3^2;
sbit Ys=P3^3;
void delay();
void main()
{//East
Ge=0;Re=1;Ye=1;
Gw=1;Rw=0;Yw=1;
Gn=1;Rn=0;Yn=1;
Gs=1;Rs=0;Ys=1;
delay();
//West
Ge=1;Re=0;Ye=1;
Gw=0;Rw=1;Yw=1;
Gn=1;Rn=0;Yn=1;
Gs=1;Rs=0;Ys=1;
delay();
//north
Ge=1;Re=0;Ye=1;
Gw=1;Rw=0;Yw=1;
Gn=0;Rn=1;Yn=1;
Gs=1;Rs=0;Ys=1;
delay();
//south
Ge=1;Re=0;Ye=1;
Gw=1;Rw=0;Yw=1;
Gn=1;Rn=0;Yn=1;
Gs=0;Rs=1;Ys=1;
delay();
}
void delay()
{
int i,j;
for(i=0;i<5000;i++)
for(j=0;j<1000;j++)
{}
}

