#include <stdio.h>
typedef struct 
{
	int green, red, blue;	
} Color;
typedef struct 
{
	int x, y;	
} Cords;

typedef struct 
{
	int side;
	Color outcolor, incolor;	
	Cords upleft;
} Square;


typedef struct 
{
	int side1, side2;
	Color outcolor, incolor;	
	Cords upleft, upright;
} Rec;


int main ()
{
	int sqside = 3;
	Cords origin = {0, 0};
	Color sqoutcolor = {152, 222, 142}, sqincolor = {52, 52, 52};
	Square s = 
	{
		sqside, 
		sqoutcolor,
		{52, 52, 52},
		{1, 1}
	};

	int rside1 = 3, rside2 = 4;
	Rec r = 
	{
		rside1,
		rside2,
		{52, 52, 52},
		sqincolor,
		origin,
		{10, 0}
	};
	
}