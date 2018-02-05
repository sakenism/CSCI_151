#include <stdio.h>
int main(){

int x = 30;
while (x > 5) {
if (x > 20) {
printf("uno ");
if (x < 25) {
printf("dos ");
}
} else if (x > 10) {
printf("tres ");
} else {
printf("quatro ");
}
x = x - 3;
}}