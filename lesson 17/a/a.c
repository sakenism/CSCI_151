#include <stdio.h>  

int min_index(int n, double a[n]) {
	int i, j = -1;
	double mini = 1000 * 1000 * 1000 + 9;
	for (i = 0; i < n; i++) {
		if (a[i] < mini) {
			mini = a[i];
			j = i;
		}
	}
	return j;
}

int main () {
	int n, i;
	double a[202020];
	scanf("%i", &n);
	for (i = 0; i < n; i++) {
		scanf("%lf", a + i);
	}
	printf("%i", min_index(n, a));
}