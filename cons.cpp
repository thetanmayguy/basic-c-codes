#include <iostream>
using namespace std;
class cl
{
	int x;
	friend cl add(cl,cl);
	public:
			cl()
			{
				x=0;
			}
			cl(int a)
			{
				x=a;
			}
			cl(int a,int b)
			{
				x=a+b;
			}
			void print()
			{
				cout<<x<<endl;
			}
};
cl add (cl a,cl b)
{
	cl d;
	d.x=a.x+b.x;
	return d;
}
int main()
{
	cl a,b(5),c(5,4);
	cl d=add(a,b);
	d.print();
	cl e=add(b,c);
	e.print();
	return 0;
}	
