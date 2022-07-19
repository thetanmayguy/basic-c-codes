#include <iostream>
using namespace std;
class c
{
	int x;
	mutable int y;
	public:
	void set(int a,int b)
	{
		x=a;
		y=b;
	}
	void alter() const
	{
		x++;//error
		y++;
		cout<<x<<endl<<y<<endl;
	}
};
int main()
{
	c d;
	d.set(10,20);
	d.alter();
	return 0;
}
