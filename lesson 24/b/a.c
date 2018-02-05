
#include <stdio.h>

void stringCopy(char *fromStr, char *toStr) {
    int i = 0;
    while (1) {
    *(toStr + i) = *(fromStr + i);
    if(*(fromStr + i) == '\0')
        break;
    i++;
    }
}

_Bool areEqual(char *str1, char *str2) {
    int i = 0;
    while(1)
    {
        if(*(str1 + i) != *(str2 + i))
            return 0;
        if(*(str1 + i) == '\0')
        {
            if((*(str2 + i) == '\0'))
                return 1;
            else
                return 0;
        }
        i++;
    }

}
void reverse(char *fromStr, char *toStr) {
    int n = 0, i = 0;
    while(1)
    {
        if(*(fromStr + n) == '\0')
            break;
        n++;
    }
    for(i = 0; i < n; i++)
    {
        *(toStr + n - i - 1) = *(fromStr + i);
    }
}
// SAKEN
// 01234
void concatenate(char *str1, char *str2, char *resultStr) {
    int i = 0, m = 0, n = 0;
    while(1)
    {
        if(*(str1 + n) == '\0')
            break;
        //printf("!%c!", *(str1 + n));
        n++;
    }
    //printf(" ");
    while(1)
    {
        if(*(str2 + m) == '\0')
            break;
        //printf("@%c@", *(str2 + m));
        m++;
    }
    //printf(" #%i %i#", n, m);
    //printf("\n");
    for(i = 0; i < n; i++)
    {
        *(resultStr + i) = *(str1 + i);
    }
    for(i = n; i < m + n; i++)
    {
        *(resultStr + i) = *(str2 + i - n);
    }
    *(resultStr + m + n) = '\0';
/*
    for(i = 0; i < n + m; i++)
        printf("%c", *(resultStr + i));
    printf("$\n");*/
}
//0123456789
//qwer
//asdfgh
//qwerasdfgh
int main(void) {

	char word1[] = "Hello";
	char word2[] = "Hi there";
	char word3[] = {'H', 'e', 'l', 'l', 'o', '\0', 'X'};
	char word4[] = "Hi";

	char result[50];

	// Test code for stringCopy
	stringCopy(word1, result);
	printf("Test 1.1 result: %s\n", result);
	stringCopy(word2, result);
	printf("Test 1.2 result: %s\n", result);
	stringCopy(word3, result);
	printf("Test 1.3 result: %s\n", result);

	// Test code for areEqual
	printf("Test 2.1 result: %i\n", areEqual(word1, word2));
	printf("Test 2.2 result: %i\n", areEqual(word1, word3));
	printf("Test 2.3 result: %i\n", areEqual(word2, word4));
	printf("Test 2.4 result: %i\n", areEqual(word4, word2));

	// Test code for reverse
	reverse(word1, result);

	printf("Test 3.1 result: %s\n", result);
	reverse(word2, result);
	printf("Test 3.2 result: %s\n", result);
	reverse(word3, result);
	printf("Test 3.3 result: %s\n", result);

	// Test code for concatenate
	concatenate(word1, word2, result);
	printf("Test 4.1 result: %s\n", result);
	concatenate(word3, word4, result);
	printf("Test 4.2 result: %s\n", result);
	concatenate(word1, word1, result);
	printf("Test 4.3 result: %s\n", result);

	return 0;
}