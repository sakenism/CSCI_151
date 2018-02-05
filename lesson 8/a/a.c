#include <stdio.h>
int a;
int main ()
{
	while(1)
	{
		scanf("%i", &a);
		printf("%i\n", a * a);
		if(a <= 0)
		{
			return 0;
		}
	}

}