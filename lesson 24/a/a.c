#include <stdio.h>
#include <stdlib.h>



void writeln(char letters[]) {
   int i = 0;
	while (letters[i] != '\0') {

		putchar(letters[i]);
		i++;
	}

	putchar('\n');
}

int main( ) {

	char arr[] = "abcdef";
	char *ptr = "ghijklmnop";

	writeln(arr);
	writeln(ptr);
	writeln("qrstuv");

	return 0;
}