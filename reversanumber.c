#include<stdio.h>

int main()
{
	int num =123;
	int num1 = num;
	int tmp =0;
	
	while(num > 0)
	{
		tmp *= 10;
		tmp +=num %10;
		num = num/10;
	}
	
	printf("%d reveresed %d",num1,tmp);
	return 0;
}
