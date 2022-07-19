#include <iostream>
using namespace std;
class cir
{
	int r;
	public:
	int ar()
	{
		return ((3.142)*r*r);
	}
	void set(int n)
	{
		r=n;
	}
};
int main()
{
	cir c;
	int n;
	cout<<"Enter the radius :";
	cin>>n;
	c.set(n);
	cout<<"Area="<<c.ar()<<" sq units"<<endl;
	return 0;
}
