#include <stdio.h>
double metr, centi, myria, inch, mile, fur;
int main ()
{
	FILE *fp;
	fp = fopen("a.txt", "r");
	fscanf(fp, "%lf", &metr);
	centi = metr * 100.00;
	myria = metr / 10000.00;
	inch = metr * 39.3700787;
	mile = metr / 1000 / 1.609344;
	fur = metr / 201.16800;
	printf("%lf meters is %lf centimeters\n", metr, centi);
	printf("%lf meters is %lf myriameters\n", metr, myria);
	printf("%lf meters is %lf inches\n", metr, inch);
	printf("%lf meters is %lf miles\n", metr, mile);
	printf("%lf meters is %lf furlongs\n", metr, fur);
}