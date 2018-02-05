#include <stdio.h> 
#include <string.h>
int main() { 
char name[12121];
printf("What is the name of the file\n");
scanf("%s", name);
FILE *infile;
FILE *qwe; 
FILE *infile2; 
int i = 0;

infile = fopen("values.txt", "r"); 
infile2 = fopen("story.txt", "r"); 
qwe = fopen(name, "w");


if (infile == NULL || infile2 == NULL) { 
	printf("Problem opening files.");       
	return 1; 
} 

printf("Files opened successfully."); 

char word[81]; 
char ch = '$'; 
fscanf(infile2, "%c", &ch);
while(!feof (infile))
{ 
	fscanf(infile, "%s", &word);
	memset(word, 0, sizeof(word));
	//*word = '$';
	word[0] = ch;
	fprintf(qwe, "%s\n", word);
}




return 0; 
}