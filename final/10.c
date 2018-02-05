#include <stdio.h>

double solve(double x, int n) 
{
	if (n == 0)
		return 1;
	return 1 + x * solve(x, n - 1);
}
int main ()
{

	double x = 3;
	int n = 2;
	printf("%lf", solve(x, n));

}