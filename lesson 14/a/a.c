#include <stdio.h>
typedef struct
{
	int hours, mins;
	char amOrpm;
} time;
int main ()
{
	
	printf("Give me values of minutes\n");
	time now = {0, 0, 'a'};
	int advMins;
	scanf("%i", &advMins);
	now.mins = advMins % 60; 
	now.hours = advMins / 60 % 24; 
	if(now.hours >= 12)
	{
		now.amOrpm = 'p';
	}
	printf("\nIt is %i:%i:00 %cm", now.hours, now.mins, now.amOrpm);

}