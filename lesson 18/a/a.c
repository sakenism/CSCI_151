#include <stdio.h>
double power(int n, int k)
{
	
	int x = abs(k);
	if(k >= 0)
	{
		if(x == 1)
		{
			return n;
		}
		else if(x == 0)
		{
			return 1;
		}
		else
		{
			if(x % 2 == 0)
			{
				int z = power(n, x / 2);
				double ans = (double)(z) * z;
				return ans;
			}
			else
			{
				int z = power(n, x / 2);
				double ans = (double)(z) * z * n;
				return ans;
			}
		}
	}
	else
	{
		if(x == 1)
			return 1 / (double)(n);
	  	else if(x == 0)
	  		return 1;
	  	else
	  	{
	  		if(x % 2 == 0)
	  		{
	  			double z = 1 / (double)(power(n, x / 2));
	  			double ans = (double)(z) * z;
	  			return ans;
	  		}
	  		else
	  		{
	  			double z = 1 / (double)(power(n, x / 2));
	  			double ans = (double)(z) * z * (1 / (double)(n));
	  			return ans;
	  		}
	  	}
	}
}
int main ()
{

	int n, x;
	scanf("%i %i", &n, &x);
	printf("%lf", power(n, x));
}