#include <stdio.h>
#include <math.h>


_Bool isIdeal(int n)
{
	int i, sum = 0;
	for(i = 1; i < n; i++)
	{
		if(n % i == 0)
		{
			sum = sum + i;			
		}
	}
	if(sum == n)
	{
		return 1;
	}
	return 0;
}


int main ()
{
	int n, i;
	scanf("%i", &n);                
	printf("%i", isIdeal(n));
}