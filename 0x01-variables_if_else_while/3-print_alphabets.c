#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	/* your code goes there */
	
  	char a = 'a';
	
	for(a='a'; a<='z'; a++){
		putchar(a);	
	}
	
	char A = 'A';
	
	for(A='A'; A<='Z'; A++){
		putchar(A);	
	}
	
	putchar('\n');
	
	return (0);
}
