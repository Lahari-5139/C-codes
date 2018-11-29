#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the values of a and b:");
    scanf ("%d %d",&a,&b);
    c = b ;
    b = a ;
    printf ("the value of b is %d",b);
    a = c ;
    printf ("the value of a is %d",a);
    return 0;    
}