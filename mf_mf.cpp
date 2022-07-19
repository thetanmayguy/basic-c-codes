#include <iostream>
using namespace std;
class c
{
	int x;
	void acc(int n)
	{
		x=n;
	}
	public:
	void set(int n)
	{
		acc(n);
	}
	void get()
	{
		cout<<x<<endl;
	}
};
int main()
{
	c d;
	d.set(5);
	d.get();
	return 0;
}
