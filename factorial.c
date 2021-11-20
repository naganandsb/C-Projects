#include<stdio.h>

int main()
{
	int i,a=4;
	int num =1;
	for(i=a; i >0; i-- )
	{
		num *= i;
	}
	
	printf("%d",num);
	return 0;
}
