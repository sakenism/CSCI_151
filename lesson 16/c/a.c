#include <stdio.h>
#include <math.h>


_Bool isPrime(int n)
{
	int i;
	for(i = 2; i <= sqrt(n) + 1; i++)
	{
		if(!(n % i))
			return 0;
	}
	return 1;
}


int main ()
{
	int n;
	scanf("%i", &n);
	printf("%i", isPrime(n));
}