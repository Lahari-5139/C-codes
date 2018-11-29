#include<stdio.h>
int main()
{
	while(1)
	{
		void *m = malloc(2);
		memset(m,0,2);
	}
	return 0;
}
