#include <stdio.h>
int n, i;
int main ()
{
	FILE *fp = fopen("a.txt", "r");
	fscanf(fp, "%i", &n);
	int dw = 4;
	if(n < 1 || n > 366)
	{
		printf("error");
		return 0;
	}
	printf("It is ");
	for(i = 1; i <= n; i++)
	{
		dw++;
		dw %= 7;
	}
	if(dw == 0)
	{
		printf("Sunday, ");
	}
	if(dw == 1)
	{
		printf("Monday, ");
	}

	if(dw == 2)
	{
		printf("Tuesday, ");
	}

	if(dw == 3)
	{
		printf("Wednesday, ");
	}

	if(dw == 4)
	{
		printf("Thursday, ");
	}

	if(dw == 5)
	{
		printf("Friday, ");
	}

	if(dw == 6)
	{
		printf("Saturday, ");
	}
	if(n <= 31)
	{
		printf("January %i ", n);
		return 0;
	}
	n -= 31;
	if(n <= 29)
	{
		printf("February %i ", n);
		return 0;
	}
	n -= 29;

	if(n <= 31)
	{
		printf("March %i ", n);
		return 0;
	}
	n -= 31;

	if(n <= 30)
	{
		printf("April %i ", n);
		return 0;
	}
	n -= 30;

	if(n <= 31)
	{
		printf("May %i ", n);
		return 0;
	}
	n -= 31;

	if(n <= 30)
	{
		printf("June %i ", n);
		return 0;
	}
	n -= 30;

	if(n <= 31)
	{
		printf("July %i ", n);
		return 0;
	}
	n -= 31;

	if(n <= 31)
	{
		printf("August %i ", n);
		return 0;
	}
	n -= 31;

	if(n <= 30)
	{
		printf("September %i ", n);
		return 0;
	}
	n -= 30;

	if(n <= 31)
	{
		printf("October %i ", n);
		return 0;
	}
	n -= 31;

	if(n <= 30)
	{
		printf("November %i ", n);
		return 0;
	}
	n -= 30;

	if(n <= 31)
	{
		printf("December %i ", n);
		return 0;
	}
	n -= 31;

}