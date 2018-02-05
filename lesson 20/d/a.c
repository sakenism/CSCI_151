#include <stdio.h>
void conc(char str1[], char str2[], char resultStr[])
{
	int i = 0, j = 0;
	while(str1[i] != '\0')
	{
		resultStr[i] = str1[i];
		i++;
	}
	while(str2[j] != '\0')
	{
		resultStr[i] = str2[j];
		i++;
		j++;
	}
	resultStr[i] = '\0';
}
int main ()
{
	char a[1111], b[1111], c[1111];
	scanf("%s %s", a, b);
	conc(a, b, c);
	printf("%s", c);

}