#include <iostream>
using namespace std;
class b;
class a
{
	int na;
	friend int add(a,b);
	public:
	a():na(12){}
};
class b
{
	int nb;
	friend int add(a,b);
	public:
	b():nb(13){}
};
int add(a x,b y)
{
	return (x.na + y.nb);
}
int main()
{
	a n;
	b m;
	cout<<"sum ="<<add(n,m)<<endl;
	return 0;
}
