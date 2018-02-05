#include <stdio.h>
char a;
int i, j;
int main ()
{
	FILE *fp;
	fp = fopen("a.txt", "r");
	printf("\n\n");
	for(i = 1; i <= 15; i++)
	{
		for(j = 1; j <= 74; j++)
		{
			fscanf(fp, "%c", &a);
			printf("%c", a);
		}	
	}
//	printf("\n\n");
}

