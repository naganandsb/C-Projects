#include<iostream>
#include<pthread.h>

using namespace std;

int terminator=0;

void *nag1(void *fuck)
{
	long num,i;
	num = *((long*)fuck);
	while(true)
	{
		for(i=0; i <10000; i++);
		cout << "thread " << num << endl;
	}
}

void *nag2(void *fuck)
{
	long num,i;
	num = *((long*)fuck);
	while(true)
	{
		for(i=0; i <10000; i++);
		terminator++;
		cout  << "thread "<< num << endl;
		if(terminator==1000)
		{
			pthread_cancel(pthread_self());
			pthread_exit(NULL);
		}
	}
}

int main()
{
	pthread_t t1,t2;
	long r =44;
	long tt =66;
	pthread_create(&t1,NULL,nag1,&r);
	pthread_create(&t2,NULL,nag2,&tt);
	
	pthread_join(t1,NULL);
	pthread_join(t2,NULL);
	
	return 0;
}
