#include <stdio.h> 

int main(void) { 

FILE *infile; 
FILE *outfile; 
infile = fopen("infile.txt", "r"); 
outfile = fopen("outfile.txt", "w"); 

if (infile == NULL || outfile == NULL) { 
printf("Problem opening files."); 
return 1; 
} 
printf("Files opened successfully."); 

char ch; 


while((ch = getc(infile)) !=EOF){ 
printf("%c", ch); 

fprintf(outfile, "%c", ch); 
} 


fclose(infile); 
fclose(outfile); 

return 0; 
}