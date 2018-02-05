#include <stdio.h>
typedef struct 
{
	int ID;
	char c;
	int balance;
} BankCustomer;

double avec, aves, aved;
int cntc, cnts, cntd;
int main ()
{
	FILE *fp = fopen("a.txt", "r");
	int i;
	BankCustomer a[10001];
	for(i = 1; i <= 10; i++)
	{
		fscanf(fp, "%i %c %i", &a[i].ID, &a[i].c, &a[i].balance);
		if(a[i].c == 'c')
		{
			avec += a[i].balance;
			cntc++;			
		}

		if(a[i].c == 's')
		{
			aves += a[i].balance;
			cnts++;			
		}

		if(a[i].c == 'd')
		{
			aved += a[i].balance;
			cntd++;			
		}
	}
	printf("Average for checking is %lf\n", (double)(avec) / cntc);
	printf("Average for saving is %lf\n", (double)(aves) / cnts);
	printf("Average for deposit is %lf\n", (double)(aved) / cntd);

}