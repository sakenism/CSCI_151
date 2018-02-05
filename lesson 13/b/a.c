#include <stdio.h>
int R = 3, C = 4, b[10][10];  
int i, j, val = 100;
 
int main ()
{

int a[R][C];

/* set matrix elements */
for (i = 0; i < R; i++) {
 for (j = 0; j < C; j++) {
 a[i][j] = val;
 val++;
 }
}
 
/* print matrix elements */
for (i = 0; i < R; i++) {
 for (j = 0; j < C; j++) {
 printf("%5d", a[i][j]);
 }
 printf("\n");
}
for(i = 0; i < R; i++)
{
	for(j = 0; j < C; j++)
	{
		b[j][i] = a[i][j];		
	}
}

printf("\n\n\n");
for(i = 0; i < C; i++)
{
	for(j = 0; j < R; j++)
	{
		 printf("%5d", b[i][j]);
	}
	printf("\n");
}

}