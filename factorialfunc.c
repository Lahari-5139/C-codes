#include<stdio.h>
int factorial(int);
int main()
{   
    int number;
    printf ("enter a number:");
    scanf ("%d",&number);
    int fac = factorial(number);
    printf ("%d",fac);
    return 0;
}
    int factorial(int number)
    {
        int result;
        result = 1;
        for (int i = 1; i<= number; i++)
        {
            result = result*i;
        }
        return result;
    }
