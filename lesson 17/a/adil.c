#include <stdio.h>  

int minimum(int n, double a[n]) {

	double m = 10001;
	int i, j;              
	for (i = 0; i < n; i++) {
		if (a[i] < m) {
			m = a[i];
			j = i;
		}
	}
	return j;
}

double a[1111];
int n, i;   
	
int main () {

	scanf("%i", &n);
	for (i = 0; i < n; i++) {
		scanf("%lf", &a[i]);
	}
	printf("%i", minimum(n, a));
}