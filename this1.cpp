#include <iostream>
using namespace std;
class cl
{
	int x;
	public:
	void set(int x)
	{
		this->x=x;
	}
	int get()
	{
		return x;
	}
};
int main()
{
	int n;
	cl c;
	cin>>n;
	c.set(n);
	cout<<c.get()<<endl;
	return 0;
}
