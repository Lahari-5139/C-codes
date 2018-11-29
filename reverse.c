#include<stdio.h>
int main()
{
    int n,a,b,c,d,e;
    printf ("enter a five digit number:");
    scanf ("%d",&n);
    a = n%10;
    b = n%100/10;
    c = n%1000/100;
    d = n%10000/1000;
    e = n%100000/10000;
    printf ("%d%d%d%d%d",a,b,c,d,e);
    return 0;
}