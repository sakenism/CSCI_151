#include <stdio.h>
int a = 1, b = 1, i = 1;
int main ()
{
	printf("%i %i ", a, b);
	for(i = 3; i <= 20; i++)
	{
		a = a + b;
		printf("%i ", a);
		a = a + b;
		b = a - b;
		a = a - b;	
	}
}