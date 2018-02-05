#include <stdio.h>
char a[2000001];
int i;
int main ()
{
	FILE *fp = fopen("a.txt", "r");
	printf("Print some text\n");
	while(!feof(fp))
	{
		fscanf(fp, "%s", a);  
		for(i = 0; i < sizeof(a); i++)
		{
			if(a[i] >= 'a' && a[i] <= 'z')
			{
				a[i] = a[i] - 'a' + 'A';
			}
		}
		printf("%s ", a);
	}
}
