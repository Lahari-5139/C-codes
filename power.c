#include<stdio.h>
int main()
{
    int a,b,i,k=1;
    printf ("enter the values of the base and the exponent:");
    scanf ("%d%d",&a,&b);
    for (i = 0;i<b ;i++)
    {
       k = k*a;
    }
    printf ("%d",k);
    return 0;
}