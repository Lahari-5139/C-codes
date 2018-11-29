#include<stdio.h>
int main()
{
    int n,x,i;
    scanf ("%d",&n);
    for (i = 0; i<n;i++)
    {
        if(i+(i%10)+(i/10) == n)
        {
            printf ("%d\n",i);
        }
    }
    return 0;
}