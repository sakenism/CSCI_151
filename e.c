#include <stdio.h>
char a[10001], b[10001], c[10001];   
int q = 0, i;
int main ()
{
    printf("Please enter your first name\n");
    scanf("%s", &a);
    
    printf("Please enter your last name\n");
    scanf("%s", &b);
    printf("Welcome to Lab3 %s %s\n", a, b);
    printf("Would you like to be addressed using your first (1) or last (2) name?\n");
    scanf("%i", &q);
    if(q == 1)
    {
		for(i = 0; i < sizeof(a); i++)
		{
			c[i] = a[i];   	
	  	}
    }
    else
    {
    	for(i = 0; i < sizeof(a); i++)
    	{
    		c[i] = b[i];
    	}
    }
	for(i = 1; i <= 50; i++)
	{
		printf("*");
	}
	printf("***");
//	for(int i = 1; i <= )                        



}