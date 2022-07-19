#include <iostream>
using namespace std;
class c
{
	int x;
	char y;
	public:
	void set(int x,char y)
	{
		this->x=x;
		this->y=y;
	}
	void get()
	{
		cout<<x<<endl<<y<<endl;
	}
};
int main()
{
	c d;
	d.set(100,'n');
	d.get();
	return 0;
}
