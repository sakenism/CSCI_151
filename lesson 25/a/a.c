
#include <stdio.h>
#include <stdlib.h>
int n;
char* stringCopy(char *fromStr){
    char *a = malloc(sizeof(fromStr) * sizeof(char));
    int i = 0;
    while(1)
    {
        *(a + i) = *(fromStr + i);
        if(*(fromStr + i) == '\0')
            break;
        i++;
    }
    return a;
}

int main()
{
    char s[1111];
    scanf("%s", s);
    char *q = &s[0];
    printf("%s", stringCopy(q));
}