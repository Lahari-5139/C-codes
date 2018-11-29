#include<stdio.h>
int dis(int *,int);
int main()
{
    int num[]={2,3,4,5,6,7};
    dis (&num[0],6);
    return 0;
}

int dis(int *j, int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf ("element = %d\n",*j);
        j++;
    }
}
