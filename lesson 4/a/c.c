#include <stdio.h>
int a, b, c;
int main ()
{
	FILE *fp;
	fp = fopen("c.txt", "r");
	fscanf(fp, "%x%x%x", &a, &b, &c);
	printf("%i %i %i", a, b, c);

}