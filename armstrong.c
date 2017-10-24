#include<stdio.h>
int main()
{
    int i,h,t,o,k;
    for (i = 0; i <= 500; i++)
    {
        h = i/100;
        t = (i%100)/10;
        o = i%10;
        k = (h*h*h) + (t*t*t) + (o*o*o);
        if (k == i)
        {
            printf ("%d\n",i);
        }
    }
    return 0;
}

