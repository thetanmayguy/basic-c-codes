#include <iostream>
using namespace std;
class room
{
	float l,b,h;
	public:
	void set(float a,float d,float c)
	{
		l=a;
		b=d;
		h=c;
	}
	float area()
	{
		return (l*b);
	}
	float volume()
	{
		return (l*b*h);
	}
};
int main()
{
	room r;
	float a,b,c;
	cout<<"Enter lenght,breadth,height values :";
	cin>>a>>b>>c;
	r.set(a,b,c);
	cout<<"Area="<<r.area()<<" Volume="<<r.volume()<<endl;
	return 0;
}
