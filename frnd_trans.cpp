#include <iostream>
using namespace std;
class b;
class c;
class a
{
	friend class b;
	int x;
};
class b
{
	friend class c;
};
class c
{
	void fun(a p)
	{
		cout<<p.x<<endl;
	}
};

