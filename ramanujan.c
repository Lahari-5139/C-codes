#include<stdio.h>
int main()
{
    int i,j;
    for (i = 1 ; i<=12; i++)
    {
        for (j = 1 ; j<=12; j++)
        {
            if ((j*j*j)+(i*i*i)== 1729)            
            {
                printf ("%d , %d\n",i,j); 
            }
            
        }
    }
    return 0;
}