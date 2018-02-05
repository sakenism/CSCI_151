#include <stdio.h>
int res;
char c, s;
int main ()
{
	FILE *fp = fopen("a.txt", "r");
	fscanf(fp, "%i", &res);

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
	printf("%c%c", c, s);
}