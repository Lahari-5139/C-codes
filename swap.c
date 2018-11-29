#include<stdio.h>
int swap(int,int);
int main()
{
    int a,b,c;
    printf ("enter two numbers a and b:");
    scanf ("%d%d", &a,&b);
    swap(a,b);
    printf ("now the values of a,b are:%d,%d",a,b);
    return 0;
}
int swap(int x, int y)
{
    int z;
    z = x;
    x = y;
    y = z;

}
/* this does not work */