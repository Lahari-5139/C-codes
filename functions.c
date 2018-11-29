#include<stdio.h>
void message(int,char *);
int main()
{
    int n;
    char * msg[100];
    printf ("enter a number:");
    scanf ("%d",&n);
    printf ("enter the message:");
    scanf ("%[^\n]",*msg);
    message(n,*msg);
    return 0;
}
void message(int n,char * msg)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf ("%s\n",*msg);
    }
}