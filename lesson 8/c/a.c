#include <stdio.h>

int main (void) {
 FILE *fp = fopen("a.txt", "r");

 int a;
 
 fscanf(fp, "%i", &a);
 int i = 0;
 printf("%i = ", a);
 while(a > 0) 
 {
	 int b = a % 16;
	 a = a / 16;
	 
	 if(b >= 10)
	 {
	 	printf("+(%c * 16^%i)", (char)('A' + b - 10), i);	
	 }
	 else 
	 { 
	 	printf("+(%i * 16^%i)", b, i);
	 }
	 i++; 
 } 
 return 0;
}