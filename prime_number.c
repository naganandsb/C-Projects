#include<stdio.h>

int main()
{
	int a=44,i;
	int m = a/2;
	for( i =2;i < m;i++)
	{
		if(a%i == 0)
		{
			printf("it is not prime number\n");
			break;
		}
	}
	if(i == m)
	{
		printf("it is prime number\n");
	}
}
