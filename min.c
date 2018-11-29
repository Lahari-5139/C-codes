#include<stdio.h>
int min(int a,int b);
int main()
{
    int a,b,c;
    printf ("enter a number a:");
    scanf ("%d",&a);
    printf ("enter a number b:");
    scanf ("%d",&b);
    c = min(a,b);
    printf ("%d",c);
    return 0;

}
int min(int x,int y)
{
    if (x >= y)
    {
        return y;
    }
    else if (x > y);
    {
        return x;
    }

}