#include<stdio.h>
 
long choose(int n, int k)
{
  if (k == 0 || n == k)
    return 1;
 
  return choose(n - 1, k - 1) + choose(n - 1, k);
}
 
int main()
{
	 int n, k;
    scanf("%i %i", &n, &k);
    printf("%i", choose(n, k));
}