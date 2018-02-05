#include <stdio.h>
int a, b, c;
int main ()
{
	FILE *fp;
	fp = fopen("b.txt", "r");
	fscanf(fp, "%i%i%i", &a, &b, &c);
	printf("%o %o %o", a, b, c);

}