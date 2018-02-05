#include <stdio.h>
int n, i, j, mini, maxi, a[11111];
int main ()
{
	scanf("%i", &n);  	
	for(i = 1; i <= n; i++)
	{
		scanf("%i", &a[i]);
		if(a[i] % 2 == 0)
			mini = a[i];
		else
			maxi = a[i];
	}
	for(i = 1; i <= n; i++)
	{
		if(a[i] < mini && a[i] % 2 == 0)
			mini = a[i];
		if(a[i] > maxi && a[i] % 2 == 1)
			maxi = a[i];
	}
	printf("%i %i", mini, maxi);
}