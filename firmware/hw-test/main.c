/**
 * 
 */

#include "soc-hw.h"

int main()
{
	uint8_t  c;
	gpio0->oe = 0xFF;
		
	for(;;) {	
			c = gpio0->in;
			
	switch (c) {
    		case 0x01:
			gpio0->out = 0x01;
			nsleep(1000000);
			gpio0->out = 0x00;
			nsleep(1000000);
    			break;
		case 0x02:
			gpio0->in;
			gpio0->out = 0x02;
			nsleep(100000);
			gpio0->out = 0x00;
			nsleep(100000);
    			break;

		case 0x04:
			gpio0->in;
			gpio0->out = 0x04;
			nsleep(100000);
			gpio0->out = 0x00;
			nsleep(100000);
    			break;
		
		case 0x08:
			gpio0->in;
			gpio0->out = 0x08;
			nsleep(100000);
			gpio0->out = 0x00;
			nsleep(100000);
    			break;
    		
		default: gpio0->out = 0x00;
			}
		
		gpio0->out=0x00;		
	
		}
}
//Botones del GPIO
	/*
		switch (c) {
    		case '1':
			gpio0->in;
			gpio0->out = 0xFF;
			nsleep(1000000);
			gpio0->out = 0x00;
			nsleep(1000000);
    			break;
		case '2':
			gpio0->in;
			gpio0->out = 0xFF;
			nsleep(100000);
			gpio0->out = 0x00;
			nsleep(100000);
    			break;
    		
		default: ('0');
			}

	}
*/

