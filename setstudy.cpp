#include<iostream>
#include<set>

using namespace std;

int main()
{
	set<int> a;
	
	a.insert(1);
	a.insert(4);
	a.insert(5);
	a.insert(2);
	a.insert(7);
	for(set<int>::iterator it = a.begin(); it != a.end();it++)
	{
		cout << *it << endl;
	}
	
	return 0;
}
