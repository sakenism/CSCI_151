#include <math.h>
#include <stdio.h>
double a, b, c, d, x1, x2;
_Bool ok = 0;
int main ()
{
	FILE *fp;
	fp = fopen("a.txt", "r");
	fscanf(fp, "%lf%lf%lf", &a, &b, &c);
	d = b * b - 4 * a * c;
	if(d < 0)
	{
		printf("There are no real roots");
		return 0;	
	}
	x1 = (-b + sqrt(d)) / (2 * a);
	x2 = (-b - sqrt(d)) / (2 * a);
	printf("first root is %f\n", x1);
	printf("second root is %f", x2);
		
}