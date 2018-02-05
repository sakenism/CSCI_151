#include <stdio.h>

double maxx(int n, double a[n + 1][n + 1])
{

	double mx = -10010;
	int i, j;        
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= n; j++)
		{
			if(mx <= a[i][j])
			{
				mx = a[i][j];
			}
		}
	}
	return mx;
}

int main ()
{
	int n, i, j;
	scanf("%i", &n);
	double a[n + 1][n + 1];
	for(i = 1; i <= n; i++) 
		for(j = 1; j <= n; j++)
			scanf("%lf", &a[i][j]);
	printf("%lf", maxx(n, a));
}


                  
