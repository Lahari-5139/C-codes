#include<stdio.h>
int main()
{
    int me,com,z,i,sum = 0;
    printf ("LETS PLAY MY GAME!!!!!\n");
    for (i = 0;i<4;i++)
    {
        printf ("enter a number 1 or 2 or 3 or 4:");
        scanf ("%d",&me);
        com = (5-me);
        printf ("The computer takes:%d\n",com);
        sum = sum +(me+com);
        if (((21-sum) == 6))
        {
            printf ("enter a number 1 or 2 or 3 or 4:");
            scanf ("%d",&me);
            z = (5)-me;
            printf ("The computer takes:%d\n",z);
            printf ("now there is only one left so u lost!!!"); 
            return 0;  
        }
        
    }
    return 0;
}