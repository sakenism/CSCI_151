#include <stdio.h>
typedef struct 
{
	int id;
	char gender;
	double a[6];
	double f;
} st;
int i;
int main ()
{
//	setvbuf(stdout, NULL, _IONBF, 0);
	st Erma;
	printf("Print your id\n");
	scanf("%i", &Erma.id);
	printf("What is your sex? m/f\n");

	scanf(" %c", &Erma.gender); 

	printf("Print your 5 exam scores\n");
	for(i = 1; i <= 5; i++)
	{
		scanf("%lf", &Erma.a[i]);
		Erma.f += Erma.a[i];
	}
	Erma.f /= 5;
	printf("Your final grade is %lf", Erma.f);
}