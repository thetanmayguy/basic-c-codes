#include <iostream>
using namespace std;
class c
{
	int x=0;
	friend void get(c);
	public:
	void set(int a)
	{
		x=a;
	}
};
void get(c d)
{
	cout<<d.x;
}
int main()
{
	int a;
	c d;
	d.set(5);
	get(d);
	return 0;
}
