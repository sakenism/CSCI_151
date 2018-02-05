#include <stdio.h>
int a[55];
int qwe(int x)
{
	int y = x * x;
	return y;
}                   
void print(int n, int a[n + 1])
{
	int i;
	for(i = 1; i <= 5; i++)
	{
		printf("%i ", a[i]);
	}
}
int main ()
{
	a[1] = 3;
	int i;
	for(i = 2; i <= 5; i++)
	{
		a[i] = qwe(a[i - 1]);
	}
	print(5, a);

}