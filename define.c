#include<stdio.h>
#define AND &&
#define OR ||

int main()
{
    int x,y,z;
    x = 6;
    y = 3;
    if (x == 2 AND y == 3)
    {
        printf ("hi");
    }
    else
    {
        printf ("bye");
    }
    return 0;

}