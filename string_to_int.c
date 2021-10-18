#include<stdio.h>
#include<string.h>

int main()
{
	int a = 7;
   	float b = 7.6;
   	char n ='N';
	void *p;
	p = &a;
	printf("Integer variable is = %d", *( (int*) p) );
	p = &b;
	printf("\nFloat variable is = %f", *( (float*) p) );
	p = &n;
	printf("\nChar variable is = %c", *( (char*) p) );
	return 0;
}
