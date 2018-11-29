#include<stdio.h>
int display(int *);
int main()
{
    int i;
    int marks[] = {34,67,54,66};
    for (i = 0;i<=4;i++)
    {
        display(&marks[i]);
    }
    return 0;
}

int display(int *n)
{
    printf ("%d\n",*n);
}