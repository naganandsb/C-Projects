#include<iostream>

using namespace std;
class A
{
	public: int a;
	public: int b;
	public: int c;
	public: int d;
	
	A operator + (A nag)
	{
		A tmp;
		tmp.a = a+nag.a;
		tmp.b = b+nag.b;
		tmp.c = c+nag.c;
		tmp.d = d+nag.d;
		
		return(tmp);
		
	}
	
	A operator + (int nag)
	{
		A tmp;
		tmp.a = a+nag;
		tmp.b = b+nag;
		tmp.c = c+nag;
		tmp.d = d+nag;
		
		return(tmp);
		
	}
	
	void operator ++ ()
	{
		 a++;
		b= b+2;
		c= c+3;
		d= d+4;
		
		
	}
	
	void operator ++ (int)
	{
		 a++;
		b= b+2;
		c= c+3;
		d= d+4;
		
		
	}
};

int main()
{
	A a,b,c;
	a.a=10;
	a.b=10;
	a.c=10;
	a.d=10;
	
	b.a=10;
	b.b=10;
	b.c=10;
	b.d=10;
	
	c =a+b;
	
	cout <<c.a<<endl;
	cout <<c.b<<endl;
	cout <<c.c<<endl;
	cout <<c.d<<endl;
	
	c =a+50;
	
	cout <<c.a<<endl;
	cout <<c.b<<endl;
	cout <<c.c<<endl;
	cout <<c.d<<endl;
	
	++c;
	
	cout <<c.a<<endl;
	cout <<c.b<<endl;
	cout <<c.c<<endl;
	cout <<c.d<<endl;

	c++;
	
	cout <<c.a<<endl;
	cout <<c.b<<endl;
	cout <<c.c<<endl;
	cout <<c.d<<endl;
		
	return 0;
	
}
