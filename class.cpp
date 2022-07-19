#include <iostream>
using namespace std;
class dis
{
	int f;
	float i;
	public:
	void setf(int n)
	{
		f=n;
	}
	void seti(float n)
	{
		i=n;
	}
	int getf()
	{
		return f;
	}
	float geti()
	{
		return i;
	}
};
int main()
{
	dis d;
	int f;
	float i;
	cout<<"Enter the feet and inch val:";
	cin>>f>>i;
	d.setf(f);
	d.seti(i);
	cout<<"feet="<<d.getf()<<" inches="<<d.geti()<<endl;
	return 0;
}
