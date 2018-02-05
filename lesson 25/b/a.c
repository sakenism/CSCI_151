#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int rain;
    double tmp;
    double wind;
} Weather;

Weather* mtalloc()
{
    return (Weather*)malloc(12 * sizeof(Weather));
}

int rainfall(Weather *Lazka)
{
    int i,sum = 0;
    for(i = 0; i < 12; i++)
    {
        sum += ((*(Lazka + i)).rain);
    }
    return sum;
}

double aver(Weather *Lazka)
{
    int i;
    double mini = 1111210;
    for(i = 0; i < 12; i++)
    {
        if(((*(Lazka + i)).tmp < mini))
        {
            mini = ((*(Lazka + i)).tmp);
        }

    }
    return mini;
}

double windi(Weather *Lazka)
{
    int i;
    double sum = 0;
    for(i = 0; i < 12; i++)
    {
        sum += ((*(Lazka + i)).wind);

    }
    return sum / 12;
}

void printall(Weather *Lazka)
{
    int i;
    for(i = 0; i < 12; i++)
    {
        printf("%i\t%lf\t%lf\n", ((*(Lazka + i)).rain), ((*(Lazka + i)).tmp), ((*(Lazka + i)).wind));
    }
}

int main()
{
    FILE *fp = fopen("astana.txt", "r");
    Weather *Lazka = mtalloc();
    int i, q;
    double w;
    for(i = 0; i < 12; i++)
    {
        fscanf(fp, "%i", &q);
        ((*(Lazka + i)).rain) = q;
        fscanf(fp, "%lf", &w);
        ((*(Lazka + i)).tmp) = w;
        fscanf(fp, "%lf", &w);
        ((*(Lazka + i)).wind) = w;
    }
    printall(Lazka);
    return 0;
}