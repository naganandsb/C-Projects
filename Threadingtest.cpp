#include <iostream>
//#include <cstdlib>
#include <pthread.h>

using namespace std;

#define NUM_THREADS 2

void *PrintHello(void *threadid) {
   long tid;
   tid = *((long*)threadid);
//	tid=5;
//   cout << "Hello World! Thread ID, " << tid << endl;
//   pthread_exit(NULL);

while(true)
{
	if(tid == 1 )
	{
		cout << "Nag ";
	}
	else
	{
		cout << "shiva";
	}
	
}
}

int main () {
   pthread_t threads[NUM_THREADS];
   int rc;
   int i;
   
   for( i = 0; i < NUM_THREADS; i++ ) {
      cout << "main() : creating thread, " << i << endl;
      rc = pthread_create(&threads[i], NULL, PrintHello, &i);
   }
   pthread_exit(NULL);
}

