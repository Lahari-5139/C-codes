#include<stdio.h>
#include<errno.h>
int main()
{
    errno = 0;
    FILE* p = fopen("test.bin","rb");
    if (errno == 0)
    {
        printf ("Not successful\n");
    }
    else
    {
        printf ("%d\n",errno);
    }
    return 0;
}