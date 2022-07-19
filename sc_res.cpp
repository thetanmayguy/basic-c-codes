#include <iostream>
using namespace std;
class c
{
	int x;
	public:
	int get();
	void set(int);
};
int c::get()
{
	return x;
}
void c::set(int a)
{
	x=a;
}
int main()
{
	cout<<"Enter the integer value :";
	int a;
	cin>>a;
	c d;
	d.set(a);
	cout<<"The integer value is :"<<d.get()<<endl;
	return 0;
}
