#include <stdio.h>

int main (void) {
 FILE *fp = fopen("a.txt", "r");

 int a, q;
 
 fscanf(fp, "%i %i", &a, &q);
 int i = 0;
 printf("%i = ", a);
 while(a > 0) 
 {
	 int b = a % q;
	 a = a / q;
	
	 if(b >= 10)
	 {
		 printf("+(%c * %i^%i)", (char)('A' + b - 10), q, i);	
	 }
	 else
	 {
	 
    printf("+(%i * %i^%i)", b, q, i);
 }
 i++; 
 }  return 0;
}