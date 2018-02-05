#include <stdio.h>
int main ()
{          
	int a[204], i;
	a[1] = 1;
	a[2] = 1; 
	printf("%i %i ", a[1], a[2]);
	for(i = 3; i <= 20; i++)
	{
		a[i] = a[i - 1] + a[i - 2];
		printf("%i ", a[i]);
	}                                  

}
/*

1 = 1;
2 = 1;
3 = 1 + 1 = 2;
4 = 2 + 1 = 3;
5 = 3 + 2 = 5;
6 = 5 + 3 = 8;
7 = 13;
21
34



















*/