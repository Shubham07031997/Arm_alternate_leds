#include<lpc214x.h>

void delay( unsigned int d)
{ unsigned int x,y;
   for(x=0;x<d;x++)
   {
     for(y=0;y<1275;y++)
	 {
	 }
	 }
	 }
	 int main()
	 {
	    PINSEL0=0x00000000;
		IODIR0=0x0000ffff;
		while(1)
		{
		   IOSET0=0x0000AAAA;
		   delay(200);
		   IOCLR0=0x0000AAAA;
		   delay(100);
		   IOSET0=0x00005555;
		   delay(200);
		   IOCLR0=0x00005555;
		   delay(100);
		   }
		   }
		   