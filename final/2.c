#include <stdio.h>


int main ()
{
	int i, j, x = 0;
	for(i = 1; i <= 5; i++)
	{
		for(j = 1; j <= 5; j++)
		{
			if(i == 1)
			{
				printf("1\t");
			}
			else if(j == 1)
			{
				printf("%i\t", i);
			}
			else
			{
				if(x == 0)
				{
					x = i * i;            
				}
				else
				{
					x *= i;
				}
				printf("%i\t", x);
			}
		}
		x = 0;
		printf("\n");
	}

}