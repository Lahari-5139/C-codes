#include<stdio.h>
int swap(int *x,int *y);
int main()
{
    int a,b,c;
    printf ("enter two numbers a and b:");
    scanf ("%d%d",&a,&b);
    swap(&a,&b);
    printf ("now the values of a and b are %d,%d",a,b);
    return 0;
}
int swap(int *x, int *y)
{
    int z; /* z is just a temp variable*/
    z = *x;
    *x = *y;
    *y = z;
}
/* this works as we are using pointers*/