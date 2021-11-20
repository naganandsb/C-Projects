#include<iostream>
#include<pthread.h>

using namespace std;

class nag{
	private: int a,b,c,d;
	public:
	nag()//default
	{
		a=5;
		b=6;
		c=7;
		d=8;
	}
	
	nag(int x,int y,int z,int v)// parameterwised
	{
		a=x;
		b=y;
		c=z;
		d=v;
	}
	~nag()
	{
		a=0;
		b=0;
		c=0;
		d=0;
	}
	void disp();
	
	void rakshidisp(int value)
	{
		cout << value << endl;
	}
	void rakshidisp(int value,int val2)
	{
		cout << value << endl;
		cout << val2 << endl;
		
	}
	
	nag operator +(nag par)
	{
		nag tmp;
		 tmp.a = a+par.a;
		 tmp.b = b+par.b;
		 tmp.c = c+par.c;
		 tmp.d = d+par.d;
		 
		 return(tmp);
	}
	
	nag operator +(int par)
	{
		nag tmp;
		tmp.a = a+par;
		tmp.b = b+par;
		tmp.c = c+par;
		tmp.d = d+par;
		 
		return(tmp);
	}
	
	void operator ++()
	{
		int par=1;
		a=a+par;
		b=b+par;
		c=c+par;
		d=d+par;
	}
	
	void operator ++(int)
	{
		int par=1;
		a=a+par;
		b=b+par;
		c=c+par;
		d=d+par;
	}
};

void nag::disp()
{
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
}

int main()
{
	nag abcd(1,1,1,1);
	nag xyz = abcd;
	abcd.disp();
	return 0;
}
