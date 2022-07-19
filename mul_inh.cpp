#include <iostream>
using namespace std;
class vehicle
{
	public:
	void v()
	{
		cout<<"This is car\n";
	}
};
class fourwh
{
	public:
	void f()
	{
		cout<<"This is four wheeler\n";
	}
};
class car:public vehicle,public fourwh
{
	public:
	void c()
	{
		cout<<"This is a car\n";
	}
};
int main()
{
	car w;
	w.c();
	w.f();
	w.v();
	return 0;
}
