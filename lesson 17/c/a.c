#include <stdio.h>

       

void reverse(int n, double a[n])
{
	int i;
	double b[n];
	for(i = 0; i < n; i++)
	{                      
		b[i] = a[i];	
	}

	for(i = 0; i < n; i++)
	{                      
		a[i] = b[n - i - 1];	
	}

}


void print(int n, double a[n])
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("%i ", a[i]);
	}
}
                          
int main ()
{
	int i, n;
	scanf("%i", &n);
	double a[n], b[n];
	
	for(i = 0; i < n; i++)
	{
		scanf("%i", &a[i]);
	}
	reverse(n, a);
	print(n, a);

}