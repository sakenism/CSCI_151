#include <stdio.h>
#include <math.h>
#define pi acos(-1)
int main ()
{
	FILE *fp = fopen("a.txt", "w");
	int i, j;
	for(i = 25; i <= 180; i++)
	{     
		for(j = 40; j <= sin((double)(i) / 180 * pi) * 100; j++)
		{
			fprintf(fp, "*");
		}
		fprintf(fp, "\n");
	}
}