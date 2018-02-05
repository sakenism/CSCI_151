#include <stdio.h>
 
int main()
{
  int m=3, n=3, p=3, q=3, k, sum = 0;
  
  int a[m][n];
  
  int i, j, val = 10;

/* set matrix elements */
for (i = 0; i < 3; i++) {
	for (j = 0; j < 3; j++) {
		a[i][j] = val;
		val++;
	}
}

int b[p][q];
  
  int num = 2;

/* set matrix elements */
for (i = 0; i < 3; i++) {
	for (j = 0; j < 3; j++) {
		b[i][j] = num;
		num++;
	}
}
  
int c[3][3];
  
    for (i = 0; i < m; i++) {
      for (j = 0; j < q; j++) {
        sum = 0;
        for (k = 0; k < p; k++) {
          sum = sum + a[i][k]*b[k][j];
        }
 
        c[i][j] = sum;
        sum = 0;
      }
    }
 
    printf("Product of entered matrices:-\n");
 
    for(i = 0; i < m; i++)
    {
    	for(j = 0; j < q; j++)
    	{
    		printf("%i\t", a[i][j]);
    	}
    	printf("\n");
    }

    printf("\n");
    for(i = 0; i < m; i++)
    {
    	for(j = 0; j < q; j++)
    	{
    		printf("%i\t", b[i][j]);
    	}
    	printf("\n");
    }

    printf("\n");


    for (i = 0; i < m; i++) {
      for (j = 0; j < q; j++)
        printf("%d\t", c[i][j]);
 
      printf("\n");
    }
  
  return 0;
}
