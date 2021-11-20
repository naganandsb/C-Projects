#include<stdio.h>

inline int abc(a)
{
	return(a+a);
}

int main()
{
	return(printf("%d",abc(3)));
}
