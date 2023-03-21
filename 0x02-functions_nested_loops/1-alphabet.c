#include <stdlib.h>
void print_alphabet(void);

/**
* main - check the code
* print_alphabet - print all alphabets
* Return: Always 0.
*/

int main(void)
{
print_alphabet();

return (0);
}

void print_alphabet(void)
{

char a = 'a';

for(char a = 'a'; a <='z'; a++)
{
putchar(a);
}

}
