#include <iostream>
using namespace std;
class c
{
	int n;
	public:
	void read(int n)
	{
		this->n=n;
	}
	friend int even(c d);
};
int even(c d)
{
	if(d.n%2==0)
		return 1;
	return 0;
}
int main()
{
	c d;
	int a;
	cin>>a;
	d.read(a);
	if(even(d))
		cout<<"even!"<<endl;
	else
		cout<<"odd!"<<endl;
	return 0;
}
