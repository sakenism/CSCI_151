#include <stdio.h>
#include <math.h>
#define pi acos(-1)
int fac(long a)
{
	long x = 1, i = 1;
	for(i = 1; i <= a; i++)
	{
		x *= i;
	}
	return x;
}
double power(double x, int a)
{
	if(a == 0)
	{
		return 1;
	}
	int i = 1;
	double ans = 1;
	for(i = 1; i <= a; i++)
	{
		ans *= x;						
	}
	return ans;
}
double x, ans;
int main ()
{
	FILE *fp = fopen("a.txt", "r");

	fscanf(fp, "%lf", &x);	
	ans = x;
	ans -= (double)(power(x, 3)) / (fac(3));	
	ans += (double)(power(x, 5)) / (fac(5));	
	printf("%lf %lf", ans, sin(x));      
}