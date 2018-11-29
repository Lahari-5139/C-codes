#include<stdio.h>
int main()
{
    int ram,shyam,ajay;
    printf ("enter the age of ram:");
    scanf ("%d",&ram);
    printf ("enter the age of shyam:");
    scanf ("%d",&shyam);
    printf ("enter the age of ajay:");
    scanf ("%d",&ajay);
    if (shyam>ram && ram>ajay)
        printf ("ajay");
    else if ((ram>ajay && ajay>shyam) ||(ajay>ram && ram>shyam))
        printf("shyam");
    return 0;
}
