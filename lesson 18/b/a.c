#include <stdio.h>
int sum(int a[], int from, int to)
{
	if(from == to)
	{
		return a[from];
	}
	else
	{
		return sum(a, from + 1, to) + a[from];
	}
}                

int main ()
{
	int i, n, a[11121];
	scanf("%i", &n);
	for(i = 1; i <= n; i++)
	{
		scanf("%i", a + i);
	}
	printf("%i", sum(a, 2, 5));

	            /*
	for(i = 1; i <= n; i++)
	{
		printf("%i ", a[i]);
	}             */


}