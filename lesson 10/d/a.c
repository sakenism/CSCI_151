#include <stdio.h>
#include <math.h>
char a;
int i, cnt, maxi = 0;
int main ()
{
	FILE *fp = fopen("a.txt", "r");
	printf("Print some text\n");
	while(!feof(fp))
	{
		fscanf(fp, "%c", &a);      
		if(a != ' ')
		{
			cnt++;
		}
		else
		{
			if(cnt == 0)
			{
				break;
			}
			printf("%i ", cnt);
			cnt = 0;
		}
		if(maxi < cnt)
		{
			maxi = cnt;
		}
		           
 	}
 	printf("\nmaximal number of characters in a word is %i", maxi);
}
