#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int i;
    srand(time(NULL));
    for (i =1;i<=7;i++)
    {
        printf("%d\n",((rand()%6)+1));
    }
    return 0;
}