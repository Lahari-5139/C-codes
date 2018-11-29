#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int ran;
    srand(time(NULL));
    ran = rand();
    printf ("%d",ran);
    return 0;
}