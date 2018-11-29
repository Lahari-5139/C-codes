#include<stdio.h>
int main()
{
   int c;
   c = getchar();
   if (c != EOF)
   {
       printf ("%d",1);
   }
   else
   {
       printf ("%d",0);
   }
   return 0;
}