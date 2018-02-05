#include <stdio.h> 
#include <string.h>
int main() { 

FILE *infile; 
FILE *infile2; 
int i = 0;

infile = fopen("values.txt", "r"); 
infile2 = fopen("story.txt", "r"); 

if (infile == NULL || infile2 == NULL) { 
	printf("Problem opening files.");       
	return 1; 
} 

printf("Files opened successfully.\n"); 

char word[81]; 
int ch;
fscanf(infile2, "%c", &ch);


while(!feof(infile))
{      
	
	fscanf(infile, "%s", word);
	memset(word, 0, sizeof(word));
	//*word = '$';
	word[0] = ch;
	printf("%s ", word);
	
}




return 0; 
}