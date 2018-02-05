#include <stdio.h>        
_Bool areEqual(char a[], char b[])
{
	int i = 0;
	while(a[i] != '\0' || b[i] != '\0')
	{
		if(a[i] != b[i])
			return 0;
		i++;
	}      
	if(!(a[i] == '\0' && b[i] == '\0'))
		return 0;
	return 1;
}

char a[111111], b[11111];
int main ()
{
	scanf("%s %s", a, b);
	printf("%i", areEqual(a, b));
}