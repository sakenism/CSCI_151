#include <stdio.h>
int mi(int a, int b)
{
	if(a > b)
		return b;
	else
		return a;	
}
int mini(int a[], int from, int to)
{
	if(from == to)
	{
		return a[from];
	}
	else
	{
		return mi(mini(a, from + 1, to), a[from]);
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
	printf("%i", mini(a, 2, 5));




}