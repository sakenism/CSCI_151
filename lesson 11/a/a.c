#include <stdio.h>
char a[10001], b[10001], c;
int main ()
{
	
	printf("What is the name of the 1st file\n");
	scanf("%s", a);
	printf("What is the name of the 2nd file\n");
	scanf("%s", b);
	
	FILE *fp = fopen("dsa.txt", "r");
	FILE *fp1 = fopen("asd.txt", "w");

	while((c = getc(fp)) != EOF)   	
	{
		putc(c, fp1);
	}

}