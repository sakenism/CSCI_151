#include <stdio.h>
int x;
int main ()
{
	scanf("%i", &x);
	if(x / 3600 % 24 < 10)
	{
		printf("0%i:", x / 3600 % 24);
	}
	else
	{
		printf("%i:", x / 3600 % 24);
	}
	if(x % 3600 / 60 < 10)
	{
		printf("0%i:", x % 3600 / 60);
	}
	else
	{
		printf("%i:", x % 3600 / 60);
	}
	if(x % 3600 % 60 < 10)
	{
		printf("0%i", x % 3600 % 60);
	}
	else
	{
		printf("%i", x % 3600 % 60);
	}
}