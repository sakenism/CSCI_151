#include <stdio.h>
char a[2100001];
int i, cnt;
int main ()
{
	FILE *fp = fopen("a.txt", "r");
	printf("Print some text\n");
	while(!feof(fp))
	{
		fscanf(fp, "%s", a);  
		for(i = 0; i < sizeof(a); i++)
		{
			if(a[i] == 'a')
			{
				cnt++;
			}
		}
	}
	printf("%i", cnt);	
}
