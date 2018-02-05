#include <stdio.h>
int n, k = 1, i = 0;

int main ()
{
	FILE *fp = fopen("a.txt", "r");
	fscanf(fp, "%i", &n);
	while(k <= n)
	{
		k *= 2;
		i++;
	}
	printf("%i", i - 1);

}