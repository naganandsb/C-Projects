#include<stdio.h>


void printfibonecy(int num)
{
	int n1 = 0,
		n2 = 1,
		n3 = 0,
		i = 0;
		if(num < 2)
		{
			printf("%d",n1);
			return;
		}
		if(num < 3)
		{
			printf("%d\n%d",n1,n2);
			return;
		}
		printf("%d\n%d",n1,n2);
		for(i=2; i < num; i++)
		{
			n3 = n1+n2;
			printf("\n%d",n3);
			n1 = n2;
			n2 = n3;
		}
			
}

void printfibonecytill(int num)
{
	int n1 = 0,
		n2 = 1,
		n3 = 0,
		i = 0;
		if(num < 2)
		{
			printf("%d",n1);
			return;
		}
		if(num < 3)
		{
			printf("%d\n%d",n1,n2);
			return;
		}
		
		while(1)
		{
			n3 = n1+n2;
			if(n3 > num)
			{
				break;
			}
			printf("\n%d",n3);
			n1 = n2;
			n2 = n3;
		}
			
}

int main()
{
	printfibonecytill(20);
}
