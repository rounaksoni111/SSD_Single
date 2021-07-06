/*
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRD=0XFF; //Define as output for connecting SSD

    while (1) 
    {	
							//  abcd efgdp
		PORTD=0XFC;			//0b1111 1100 -->0
		_delay_ms(1000);
		PORTD=0X60;			//0b0110 0000 -->1
		_delay_ms(1000);
		PORTD=0XDA;			//0b1101 1010 -->2
		_delay_ms(1000);		
		PORTD=0XF2;			//0b1111 0010 -->3
		_delay_ms(1000);
		PORTD=0X66;			//0b0110 0110 -->4
		_delay_ms(1000);
		PORTD=0XB6;			//0b1011 0110 -->5
		_delay_ms(1000);
		PORTD=0XBE;			//0b1011 1110 -->6
		_delay_ms(1000);
		PORTD=0XE0;			//0b1110 0000 -->7
		_delay_ms(1000);
		PORTD=0XFE;			//0b1111 1110 -->8
		_delay_ms(1000);	
		PORTD=0XF6;			//0b1111 0110 -->9
		_delay_ms(1000);
	}
}
*/



#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	unsigned char digit[10]={0XFC,0X60,0XDA,0XF2,0X66,0xB6,0XBE,0XE0,0XFE,0XF6};
	 int i=0;
	DDRD=0XFF; //Define as output for connecting SSD
	
	while (1)
	{
		for (i=0;i<=9;i++) 
		{
			PORTD=digit[i];
			_delay_ms(1000);
		}
	}
}
