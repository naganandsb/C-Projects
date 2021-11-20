#include<stdio.h>

#define M_PRINT printf("%s\n",sql);

#define M_CREATE_STR(str1,type,str2)  str1  type str2

#define M_CREATE_SQL_LINE(type,a)   sprintf(sql,M_CREATE_STR("\"insert into person (\'%s\', \'" ,type,"\'\)\""),#a,a); M_PRINT(sql);

typedef struct
{
	int a;
	char b;
	char c[100];
	float d;
} T_NAG;

int main()
{
	char sql[1000];
	T_NAG nag_struct;
	strcpy(nag_struct.c, "NAGANANAD");
	M_CREATE_SQL_LINE("%s",nag_struct.c);
	nag_struct.a =12;
	M_CREATE_SQL_LINE("%d",nag_struct.a);
	nag_struct.b ='N';
	M_CREATE_SQL_LINE("%c",nag_struct.b);
	nag_struct.d =12.87;
	M_CREATE_SQL_LINE("%f",nag_struct.d);
	
	return 0;
}
