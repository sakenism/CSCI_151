#include <stdio.h>
#include <math.h>
#define pi acos(-1)
int fac(long a)
{
	if(a == 0)
	{
		return 1;
	}
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
int n, i;
int main ()
{
	FILE *fp = fopen("a.txt", "r");

	fscanf(fp, "%lf%i", &x, &n);	
	for(i = 0; i <= n; i++)
	{
		ans += power(x, i) / fac(i);		
	}
	printf("%lf", ans);      
}