#include <stdio.h>
#include <stdlib.h>
int i, m, a[1001];

int main ()
{
	printf("What is the value of m\n");
	scanf("%i", &m);
	for(i = 1; i <= 20; i++)
	{
		a[i] = rand() % 50 + 50;
		a[i] %= m;
	}
	for(i = 1; i <= 20; i++)
	{
		printf("%i ", a[i]);
	}
}