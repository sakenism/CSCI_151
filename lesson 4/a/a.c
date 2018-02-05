#include <stdio.h>
int a, b, c;
int main ()
{
	FILE *fp;
	fp = fopen("a.txt", "r");
	fscanf(fp, "%o%o%o", &a, &b, &c);
	printf("%i %i %i", a, b, c);

}