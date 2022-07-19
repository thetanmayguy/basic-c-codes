#include <iostream>
using namespace std;
class b;
class a
{
	int n;
	friend class b;
	public:
	a():n(10){}
};
class b
{
	int n;
	public:
	b():n(20){}
	int add()
	{
		a x;
		return (x.n + n);
	}
};
int main()
{
	b c;
	cout<<"sum ="<<c.add()<<endl;
	return 0;
}
