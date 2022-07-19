#include <iostream>
using namespace std;
class animal
{
	protected:
	void eat()
	{
		cout<<"I can eat\n";
	}
};
class dog:public animal
{
	public:
	void bark()
	{
		eat();
		cout<<"I can bark\n";
	}
};
int main()
{
	dog d;
	d.bark();
	return 0;
}
