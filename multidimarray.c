#include<stdio.h>
int main()
{
    int s[4][2] = {
                    {41,100},
                    {43,99},
                    {32,98},
                    {42.97}
                  };
    int i;
    for (i = 0;i<4;i++)
    {
        printf ("address of %d th 1-D array = %d\n",i,* s[i]);
        
    }
    return 0;
}