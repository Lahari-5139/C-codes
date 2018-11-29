#include<stdio.h>
int main()
{
    int i =4, *j,*k;
    j = &i;
    k = j+3;
    printf ("value of j is %d\n",j);
    printf ("value of k is %d\n",k);
    return 0;
}
