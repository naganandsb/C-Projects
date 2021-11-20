#include<iostream>

using namespace std;
class nag
{
	public:
	int gumma(int a)
	{
		return(a+5);	
	}
	
	float gumma(float a)
	{
		return(a+5.0);	
	}		
};

int main()
{
	nag a;
	
	int c;
	float d;
	
	d = a.gumma(4);
	c= a.gumma(2);
	
	cout << c <<"...." << d << endl;
	
	return 0;
}
