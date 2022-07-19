#include <iostream>
using namespace std;
class c
{
	int a,b;;
	public:
	void set(int n,int m)
	{
		this->a=n+m;
		this->b=n-m;
	}
	void get()
	{
		cout<<a<<endl<<b<<endl;
	}
};
int main()
{
	c d;
	int a,b;
	cin>>a>>b;
	d.set(a,b);
	d.get();
	return 0;
}
