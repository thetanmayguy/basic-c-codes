#include <iostream>
using namespace std;
class c
{
	int x,y;
	public:
	void set(int n,int m)
	{
		x=n;
		y=m;
	}
	void add()
	{
		cout<<"sum="<<(x+y)<<endl;
	}
};
int main()
{
	int a,b;
	cin>>a>>b;
	c d;
	d.set(a,b);
	d.add();
	return 0;
}
