#include <stdio.h>

int fucktorial(int a)
{
	int i, tmp;
	tmp = 1;
	for(i = 1; i <= a; i++)
	{
		tmp = tmp * i;
	}	
	return tmp;
}

double pwr(double x, int n)
{
	int i;
	double cnt;
	cnt = 1;
	for(i = 1; i <= n; i++)
	{
		cnt = cnt * x;
	}
	return cnt;
}
double ans(double a, int m)
{
	int i;
	double answer, t;
	answer = 0;
	t = 0;
	if(a == 0)
	{
		return 0;	
	}
	if(a == 1)
	{
		return a;
	}
	answer = a;
	int p = 0;
	for(i = 3; i <= m * 2 - 1; i += 2)	
	{                             
	// 1 2 3 4 5 6  7
	// 1 3 5 7 9 11 13
		t = (double)(pwr(a, i));
		t /= fucktorial(i);
		if(!p)
		{
			t = -t;
			p = 1;
		}
		else
		{
			p = 0;
		}
		answer = answer + t;
	}
	return answer;

}
int main ()
{

	double x;
	int n;
	scanf("%lf %i", &x, &n);
	x = x / 180 * 3.1415296;
	printf("%lf", ans(x, n));
}                           