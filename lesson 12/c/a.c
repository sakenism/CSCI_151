#include <stdio.h>
#include <stdlib.h>
int i, m, a[1001], maxi = -1000001, mini = 1000001;
double ave;
int main ()
{
	printf("What is the value of m\n");
	scanf("%i", &m);
	for(i = 1; i <= 20; i++)
	{
		a[i] = rand() % 50 + 50;
		a[i] %= m;
		maxi = maxi < a[i] ? a[i] : maxi;
		mini = mini > a[i] ? a[i] : mini;
		ave += a[i];
	}
	ave /= 20;
	for(i = 1; i <= 20; i++)
	{
		printf("%i ", a[i]);
	}
	printf("\nmaximum value is %i\nminimum value is %i\naverage value is %lf", maxi, mini, ave);
}