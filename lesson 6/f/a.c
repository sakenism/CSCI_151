#include <stdio.h>
double power(double x, int n)
{
	if(n == 0)
	{
		return 1;
	}
	double cur = 0, ans = 1;
	int i = 1;
	for(i = 1; i <= n; i++)
	{
		ans *= x;
		cur += ans;
	}
	return cur;
}
int main ()
{
	FILE *fp = fopen("a.txt", "r");
	double x;
	int n;
	fscanf(fp, "%lf %i", &x, &n);
	printf("%lf", power(x, n));
}