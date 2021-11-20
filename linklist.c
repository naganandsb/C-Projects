#include<stdio.h>

struct linklist
{
	struct linklist *p;
	int data;
};

typedef struct linklist linklist;

linklist *head;

void inserend(int data)
{
	linklist *tmp, *tmp1;
	
	tmp = (linklist * )malloc(sizeof(linklist *));
	
	tmp->data = data;
	
	tmp->p = NULL;

	tmp1 = head;
	
	while(tmp1->p != NULL)
	{
		tmp1 = tmp1->p;
	}
	
	tmp1->p = tmp;
	
}
	
void insertinbetween(int data, int pos)
{
	linklist *tmp, *tmp1;
	
	int i;
	
	pos--;
	
	tmp = (linklist * )malloc(sizeof(linklist *));
	
	tmp->data = data;

	tmp1 = head;
	
	for( i=0;i < pos; i++)
	{
		tmp1 = tmp1->p;
	}
	
	tmp->p = tmp1->p;
	 
	tmp1->p = tmp;
	
}
	
void insertlist(int data)
{
	linklist *tmp;
	
	tmp = (linklist * )malloc(sizeof(linklist *));
	
	tmp->data = data;
	
	tmp->p = NULL;
	
	head = tmp;
}

void deletefirst()
{
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~delete called~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	linklist *tmp;
	tmp = head;
	head = tmp->p;
}

void deletelast()
{
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~delete last called~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	linklist *tmp, *tmp1;
	tmp = head;
	while(tmp->p != NULL)
	{
		tmp1 = tmp;
		tmp = tmp->p;
	}
	tmp1->p = NULL;
}

void reverselinklist(linklist *d)
{
	if(d->p == NULL)
	{
		printf("\n\n%d\n",d->data);
		return;
	}
	reverselinklist(d->p);
	printf("%d\n",d->data);
}

void deleteindex(int pos)
{
	linklist *tmp,*tmp1;
	int i=0;
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~delete at pos called~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	tmp = head;
	for(i=0; i < pos; i++)
	{
		tmp1 = tmp;
		tmp = tmp->p;
	}
	tmp1->p = tmp->p;
}

void showdata()
{
	linklist *tmp1;
	
	tmp1 = head;
	
	while(tmp1->p != NULL)
	{
		printf("data= %d\n", tmp1->data);
		
		tmp1 = tmp1->p;
	}
	printf("data= %d\n", tmp1->data);
}
void lastbutndelete()
{
	linklist *tmp =head,*tmp1 =head;
	
	printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
	while(((tmp->p)->p)->p != NULL)
	{
		tmp1 = tmp;
		tmp = tmp->p;
	}
	tmp1->p = tmp->p;
}
void delete_n(linklist *d,int num)
{
	static int count =0;
	if(d->p == NULL)
	{
		count++;
		return;
	}
	delete_n(d->p,num);
	count++;
	if(count == num)
	{
		printf("%d",d->data);
	}
}

int main()
{
	
	insertlist(10);
	inserend(2);
	inserend(3);
	inserend(6);
	inserend(9);
	insertinbetween(11,2);
	showdata();
//	deletefirst();
//	showdata();
//	deletelast();
//	showdata();
//	deleteindex(2);
//	showdata();
//	lastbutndelete();
//	reverselinklist(head);
//	showdata();
	delete_n(head,3);
	return 0;
}
