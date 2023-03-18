#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	char a='a';
	for(a='a'; a<='z'; a++){
		if(a != 'q' && a != 'e'){
		   putchar(a);
		}
	}
	putchar('\n');
  
	return (0);
}
