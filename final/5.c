#include <stdio.h>
void output(int a[3]) {
printf("%i %i %i \n", a[0], a[1], a[2]);
}
void countdown(int a[3]) {
a[0] = a[2] * 2;
a[1] = a[0] / 3;
a[2] = a[1] / 2;
}
int main() {
 int a[] = {20, 20, 20};
 while(a[0] > 0) {
 output(a);
 countdown(a);
 }
 return 0;
}