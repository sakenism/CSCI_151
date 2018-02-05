#include <stdio.h>
int a, i;
int main ()
{
	FILE *fp = fopen("a.txt", "r");
	fscanf(fp, "%i", &a);
	for(i = 2; i <= a - 1; i++)
	{
		if(a % i == 0)
		{
			printf("%i ", i);
		}
	}
}