#include <stdio.h>
char a[11111];
int main ()
{
	int sum = 0;
	FILE *fp = fopen("a.in", "r");
	while(!feof(fp))
	{
		fscanf(fp, "%s", a);
		sum += atoi(a);
	}
	printf("%i", sum);
}