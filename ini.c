#include<stdio.h>
int main()
{
    float i,*j;
    j = &i;
    printf ("%f",*j);
    return 0;
}