#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	/* your code goes there */
  	for(n=0; n<16; n++){
		printf("%x", n);
	}
	putchar('\n');
  
	return (0);
}
