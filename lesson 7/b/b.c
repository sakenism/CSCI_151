#include <stdio.h>
int k = 1, n, i;
int main ()
{
	scanf("%i", &n);
	while(k <= n)
	{
		k *= 2;
		i++;
	}	
	printf("%i", i - 1);
}