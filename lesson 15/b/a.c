#include <stdio.h>
typedef struct
{
	int r, g, b;	
} Color;

typedef struct
{
	int x, y;
} Coords;


typedef struct
{
	Color pcolor;
	Coords pcoords[6];
} Pentagon;
int main ()
{
	FILE *fp = fopen("in.txt", "r");
	int i, r, b, g;
	Pentagon USA;
	int x[6], y[6];
	fscanf(fp, "%i %i %i", &r, &b, &g);
	Color cvet = {r, g, b};
	USA.pcolor = cvet;
	for(i = 1; i <= 5; i++)
	{
		fscanf(fp, "%i %i", &x[i], &y[i]);
		USA.pcoords[i].x = x[i];
		USA.pcoords[i].y = y[i];
	}
}