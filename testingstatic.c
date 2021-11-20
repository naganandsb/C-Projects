#include<stdio.h>
//static const int a;
//int main()
//{
//	int a;
//	return 0;
//}

//int main()
//{
//	const int nag = 10;
//	int *ptr;
//	
//	ptr = &nag;
//	(*ptr)++;
//	
//	printf("%d",nag);
//	return 0;
//}

//int main()
//{
//	const int nag = 10;
//	 int * const ptr = &nag;
//	(*ptr)++;
//	
//	printf("%d",nag);
//	return 0;
//}


//inline int nag(a)
//{
//	return(a+50);
//}
//
//int main()
//{
//	int l =100;
//	int c = 2*nag(l);
//	printf("%d",c);
//	return 0;
//}
 int nag(a)
{
	return(a+50);
}

int main()
{
	int l =100;
	int c = 2*nag(l);
	printf("%d",c);
	return 0;
}


