#include<stdio.h>
int main()
{
    int i,n,k = 0;
    printf ("enter a number:");
    scanf ("%d",&n);
    for (i = 0 ;i<=n ;i++)
    {
        k = k+i;
    }
    printf ("%d",k);
    return 0;
}