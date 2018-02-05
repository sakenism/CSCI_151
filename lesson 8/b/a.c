#include <stdio.h>

int main (void) {
 FILE *fp = fopen("a.txt", "r");

 int a;
 
 fscanf(fp, "%i", &a);
 int i = 0;
 printf("%i = ", a);
 do {
 int b = a % 8;
 a = a / 8;
 
 printf("+(%i * 8^%i)", b, i);
 i++; 
 } while (a > 0);
 
 return 0;
}