#include<stdio.h>
int main()
{
    int s[4][2] = {
        {41,100},
        {43,99},
        {32,98},
        {42.97}
      };
    int i,j;
    for (i= 0;i<4;i++ )
    {
        for (j =0;j<2;j++)
        {
            printf ("%d ",s[i][j]); /* or *(*(s+i)+j) can also be used*/
        }
        printf ("\n");
    } 
    return 0;
}