#include <iostream>
using namespace std;
class box
{
	int l;
	public:
	box():l(0){}
	friend void print(box b);
	void set(int n)
	{
		l=n;
	}
};
void print(box b)
{
	cout<<b.l<<endl;
}
int main()
{
	box b;
	int n;
	cout<<"length: ";
	cin>>n;
	b.set(n);
	print(b);
	return 0;
}
