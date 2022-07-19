#include <iostream>
using namespace std;
class b;
class a
{
	int x;
	public:
		void set(int i)
		{
			x=i;
		}
		friend void max(a,b);
};
class b
{
	int x;
	public:
		void set(int i)
		{
			x=i;
		}
		friend void max(a,b);
};
void max(a c,b d)
{
	if(c.x>d.x)
		cout<<c.x<<endl;
	else
		cout<<d.x<<endl;
}
int main()
{
	a c;
	b d;
	c.set(3);
	d.set(2);
	max(c,d);
	return 0;
}
