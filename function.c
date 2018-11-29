#include<stdio.h>
int cubefunc(int n);
int main()
{
    int n ,y;
    printf ("enter a number:");
    scanf ("%d",&n);
    y = cubefunc(n);
    printf ("%d\n",y);    
    return 0;
}
int cubefunc(n)
{
    int a;
    a = (n*n)*n;
    return a;
}
