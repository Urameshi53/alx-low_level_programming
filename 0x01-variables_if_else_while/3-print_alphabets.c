#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	/* your code goes there */
	
  	char a = 'a';
	char b = 'A';
	for(a='a'; a<='z'; a++){
		putchar(a);	
	}
	
	for(b='A'; b<='Z'; b++){
		putchar(b);	
	}
	
	putchar('\n');
	
	return (0);
}
