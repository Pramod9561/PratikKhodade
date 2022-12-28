	#include<reg52.h>
	void delay(int k);
	void main()
	{
		while(1)
{
	P2=0X03;
	delay(1000);
	P2=0X06;
  delay(1000);
	P2=0X0C;
  delay(1000);
	P2=0X09;
  delay(1000);
	}
}
	void delay(int k)
	{
	int i,j;
	for(i=0;i<k;i++)
	for(j=0;j<300;j++){}
	}
	
			
	