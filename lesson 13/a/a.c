#include <stdio.h>
int a[21][21], i, j;
int main ()
{
	for(i = 1; i <= 12; i++)
	{
		for(j = 1; j <= 12; j++)
		{
			a[i][j] = i * j;

		}
	}     
	for( i = 1; i <= 12; i++)
	{
		for(j = 1; j <= 12; j++)
		{
			printf("%i \t", a[i][j]);	
		}
		printf("\n");
	}
}