#include <stdlib.h>
#include <time.h>
#include <sdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

void determine(int);

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
  
  
  determine(n);
  
	return (0);
}

void determine(int n){
    if(n > 0){printf("is positive");}
    else if (n == 0) {printf("is zero");}
    else {printf("is negative");}
}
