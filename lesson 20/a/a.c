#include <stdio.h>
void stringCopy(char from[], char to[])
{
	int i = 0;             
	while(from[i] != '\0')
	{
		to[i] = from[i];
		i++;
	}
	   /*
	int n = sizeof(from);
	for(i = 0; i < n; i++)
	{
		to[i] = from[i];
	}   */
}
int main ()
{
	char a[10111] = "ken dsadas";
	char b[1212];
	stringCopy(a, b);
	printf("%s", b);

}