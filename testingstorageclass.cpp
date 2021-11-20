#include<iostream>
#include<vector>
#include<array>

using namespace std;

int getcount(int x,int y,vector<int> nag)
{
	int count = 0;
	array<int> tmp;
	for(int i =0; i < y;i++)
	{
		tmp[i] = nag.at(i);
	}
	int indximp = y-x;
	
	while(indximp[indximp] != 0)
	{
		
	}
	
}


int main()
{
	int x= 2;
	int y= 3;
	vector<int> nag;
	nag.push_back(3);
	nag.push_back(3);
	nag.push_back(3);
	
	cout << getcount(x,y,nag);
}
