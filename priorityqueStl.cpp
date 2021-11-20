#include<iostream>
#include<queue>

using namespace std;

int main()
{
	priority_queue<int> nag;
	
	nag.push(5);
	nag.push(2);
	nag.push(1);
	nag.push(0);
	nag.push(7);
	int n = nag.size();
	for(int i=0; i < n ; i++)
	{
		cout << nag.top() << endl;
		nag.pop();
	}
	
	return 0;
}
