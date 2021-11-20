#include<stdio.h>
#include<string.h>

int main()
{
	int nag = 121;
	
	char p[20];
	char p1[20];
	
	
	sprintf(p,"%d",nag);
	
	strcpy(p1,p);
	
	strrev(p);
	
	if(strcmp(p1,p))
	{
		printf("Not palindrum\n");
	}
	else
	{
		printf("palindrum\n");	
	}
	return 0;
}
