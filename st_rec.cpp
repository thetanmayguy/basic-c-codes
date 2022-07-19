#include <iostream>
using namespace std;
class s
{
	int id;
	string name;
	float pc;
	public:
	void set(int i,string s,float f)
	{
		this->id=i;
		this->name=s;
		this->pc=f;
	}
	float per()
	{
		return this->pc;
	}
	string nm()
	{
		return this->name;
	}
};
int main()
{
	s st[5];
	int i,a;
	string c;
	float n;
	for(i=0;i<5;i++)
	{
		cin>>a>>c>>n;
		st[i].set(a,c,n);
	}
	float m=st[0].per();
	a=0;
	for(i=0;i<5;i++)
		if((n=st[i].per())>m)
		{
			m=n;
			a=i;
		}
	cout<<"Student with maximum percentage is "<<st[a].nm()<<" with "<<st[a].per()<<"%"<<endl;
	return 0;
}
