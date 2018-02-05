#include <stdio.h>
#include <math.h>
double r, h, a, sa, v, pi = 3.1415926;
int main ()
{
	FILE *fp;
	fp = fopen("a.txt", "r");
	fscanf(fp, "%lf%lf", &h, &r);	
  	a = pi * r * r;
  	sa = pi * r * sqrt(r * r + h * h); 
  	v = a * h / 3;
  	printf("Area is %lf\n", a);
  	printf("Surface area is %lf\n", sa);
  	printf("Volume is %lf", v);
}