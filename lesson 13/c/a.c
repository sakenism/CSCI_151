#include <stdio.h>
int a[11][11], i, j, maxi = -1000001;
int main ()
{
	for(i = 1; i <= 3; i++)
	{
		for(j = 1; j <= 3; j++)
		{
			scanf("%i", &a[i][j]);
			if(maxi < a[i][j])
			{
				maxi = a[i][j];
			}
		}
	}
	for(i = 1; i <= 3; i++)
	{
		for(j = 1; j <= 3; j++)
		{
			if(a[i][j] == maxi)
			{
				printf("row is %i and column is %i", i, j);
				return 0;
			}
		}
	}
}