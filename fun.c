#include<stdio.h>
int test(int);
int test (int,int);
int main()
{
    int a,b;
    a = 5;
    b = 6;
    printf ("%d",test(a));
    return 0;
}

int test(int a)
{

    return a;
}

int test (int a,int b)
{

    return a+b;
}
/* Function overloading is not supported in C*/
