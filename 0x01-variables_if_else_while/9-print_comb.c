#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	char a = '0';
	/* your code goes there */
  	for(a='0'; a<='8'; a++){
		putchar(a);
		putchar(',');
	}
	putchar('9');
	putchar('\n');
  
	return (0);
}
