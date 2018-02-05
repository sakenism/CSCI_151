#include <stdio.h>
int a, b, c;
int main ()
{
	FILE *fp;
	fp = fopen("c.txt", "r");
	fscanf(fp, "%i%i%i", &a, &b, &c);
	printf("%x %x %x", a, b, c);

}