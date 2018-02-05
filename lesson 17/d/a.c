#include <stdio.h>

void pr(int n, int m, double b[n][m])
{
	int i, j;
	for(i = 0; i < m; i++)  
	{
		for(j = 0; j < n; j++)
			printf("%lf ", b[i][j]);
		puts("");
	}
}

void tr(int n, int m, double a[n][m], double b[n][m])
{
	int i, j;

	for(i = 0; i < n; i++)
		for(j = 0; j < m; j++)
			b[j][i] = a[i][j];
}                             
int main ()
{
	int i, n, j, m;
	scanf("%i %i", &n, &m);
	double a[n][m], b[n][m];
	for(i = 0; i < n; i++)
		for(j = 0; j < m; j++)
		{
			scanf("%lf", &a[i][j]);
	  	}
	tr(n, m, a, b);
	pr(n, m, b);

}