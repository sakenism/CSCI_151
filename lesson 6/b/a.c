#include <stdio.h>
int i, x = 1;
int main ()
{
	for(i = 1; i <= 16; i++)
	{
		x *= 2;
		printf("%i ", x);
	}
}