#include <stdio.h>

double a, b, c;
_Bool q;
int main ()
{
	FILE *fp;
	fp = fopen("a.txt", "r");                                       
	fscanf(fp, "%lf%lf%lf", &a, &b, &c);
	printf("Volume is %lf\n", a * b * c);
	printf("Surface area is %lf ", a * b * 2 + b * c * 2 + a * c * 2);
}
