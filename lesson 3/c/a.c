#include <stdio.h>
double l, q[7], final, res = 0.00;
char c, s = ' ';
int i = 1;
int main ()
{
	FILE *fp;
	fp = fopen("a.txt", "r");
	fscanf(fp, "%lf%lf", &l, &final);
	for(i = 1; i <= 6; i++)
	{
		fscanf(fp, "%lf", &q[i]);
		res += q[i] * 50 / 6 / 100;
	}
	printf("lab result is %lf\n", l);
	printf("final exam result is %lf\n", final);
	for(i = 1; i <= 6; i++)
	{
		printf("%i quiz result is %lf\n", i, q[i]);
	}
	res += l * 0.2 + final * 0.3;
	if(res >= 95)
	{
		c = 'A';
	}
	else if(res >= 90)
	{
		c = 'A'; 	
		s = '-';
	}
	else if(res >= 85)
	{
		c = 'B';
		s = '+';
	}
	else if(res >= 80)
	{
		c = 'B';
	}
	else if(res >= 75)
	{
		c = 'B';
		s = '-';
	}
	else if(res >= 70)
	{
		c = 'C';
		s = '+';
	}
	else if(res >= 65)
	{
		c = 'C';
	}
	else if(res >= 60)
	{
		c = 'C';
		s = '-';
	}
	else if(res >= 55)
	{
		c = 'D';
		s = '+';
	}
	else if(res >= 50)
	{
		c = 'D';
	}
	else
	{
		c = 'F';
	}


	printf("FINAL GRADE IS : %lf. Which means your grade is %c%c", res, c,s);

}