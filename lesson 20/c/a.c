#include <stdio.h>
void ozimbilem(char fr[], char to[])
{
	int n = 0, i = 0;
	while(fr[n] != '\0')
	{
		n++;
	}
	for(i = 0; i < n; i++)
		to[n - i - 1] = fr[i];
}
int main ()
{
	char a[11111], b[11111];
	scanf("%s", a);
	ozimbilem(a, b);
	printf("%s", b);
}