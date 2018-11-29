#include<stdio.h>
int main()
{
    int n,i,j,s,ar[100];
    scanf ("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf ("%d",&ar[i]);
    }
    scanf ("%d",&s);
    for (i =0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if (ar[i]+ar[j]==s)
            {
                printf ("%d %d\n",i,j);
            }
        }
    }
    return 0;
}