#include <stdio.h>

int main ()
{
	int i, j, n = 5;
	for(i = 1; i <= 6; i++)
	{
		for(j = 1; j <= 5; j++)
		{
			if(i + j > n + 1)
			{
				printf("*");
			}
			else
			{
				printf("+");
			}                           
		}
		printf("\n");
	}
}


/*
	 j j j j j            
    1 2 3 4 5 
 1  1 1 1 1 1 
 2  1 1 1 1 1
 3  1 1 1 1 1
 4  1 1 1 1 1
 5  1 1 1 1 1






*/