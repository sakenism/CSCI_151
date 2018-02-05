#include <stdio.h>
char a[11111];
int i;
void print(int n)
{
	if(n <= 0)
		return;

	if(n % 2)
	{
		a[i] = '1';
	}	
	else
	{
		a[i] = '0';	
	}
	i++;
	print(n / 2);
	i--;
	for(i; i >= 0; i--)
	{
		printf("%c", a[i]);
	}
}
int main()
{
	int n;
	scanf("%i", &n);
	print(n);
}