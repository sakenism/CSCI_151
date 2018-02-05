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
	if(m == 0)
	{
		return 1;	
	}
	if(m == 1)
	{
		return a + 1;
	}
	answer = a + 1;
	for(i = 2; i <= m; i++)	
	{
		t = (double)(pwr(a, i));
		t = t / fucktorial(i);
		answer =  answer + t;
	}
	return answer;

}
int main ()
{

	double x;
	scanf("%lf", &x);
	printf("%lf", ans(x, 10));
}                           