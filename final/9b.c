#include <stdio.h>
#include <stdlib.h>
typedef struct
{
	int x;
	int y;
} point;

typedef struct
{
	point x1;
	point x2;
} line;


int main ()
{       
	int i;
   line *blah = (line*)malloc(21 * sizeof(line));
   for(i = 1; i <= 20; i++)
   {
   	(*(blah + i)).x1.x = i;
   	
   	(*(blah + i)).x1.y = 0;

   	(*(blah + i)).x2.x = 0;
   	
   	(*(blah + i)).x2.y = i;

   	printf("(%i,%i) and (%i,%i), \n", (blah + i)->x1.x, (blah + i)->x1.y, (blah + i)->x2.x, (blah + i)->x2.y);


   }      
	

}