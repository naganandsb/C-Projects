#include<stdio.h>

int main()
{
	int *p =NULL;
	int a=10;
	printf("%d",&a);
	sizeof(a);
	p = (int *);
	printf("    %d\n",*p);
	++*p;
	printf("%d",a);
	return 0;
}
