#include <stdio.h>
int main ()
{
	int i;
	for(i = -50; i <= 40; i++)
	{
		double x = (double)(i) * 1.8 + 32;
		printf("%i        %f\n", i, x);
	}
}