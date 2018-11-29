#include<stdio.h>
int main()
{
    char code;
    char string[100];
    int row,col,len,i,j;
    scanf ("%c",&code);
    scanf ("%d",&row);
    scanf ("%d",&col);
    scanf ("%s",string);
    len = row*col;
    if (code == 'E')
    {
        for (i=0;i<(col);i++)
        {
            for(j=0;j<(i+row);j++)
            {
                printf ("%c",string[(j*row)+i]);
            }
        }
    }
    if (code == 'D')
    {
        for (i=0;i<(row);i++)
        {
            for(j=0;j<(i+col);j++)
            {
                printf ("%c",string[(j*col)+i]);
            }
        }
    }
    
    return 0;
}