#include <stdio.h>   
#include <math.h>
int i, x = 1;

int main ()
{
	for(i = 1; i <= 16; i++)
	{
		printf("%i %lf\n", i, (pow(2, i)));
	}
}