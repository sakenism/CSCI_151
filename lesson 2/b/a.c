#include <stdio.h>
double a, pi = 3.1415;
int main ()
{
	FILE *fp;
	fp = fopen("a.txt", "r");
	fscanf(fp, "%lf", &a);
	printf("Area is %lf\n", a * a * pi); 
	printf("Circumference is %lf\n", 2 * a * pi);

}