#include <iostream>
using namespace std;
class exam
{
	float phy,che,mat;
	public:
		void read()
		{
			cout<<"input p,c,m marks: ";
			cin>>phy>>che>>mat;
		}
		void tot(exam p,exam c)
		{
			phy=p.phy+c.phy;
			che=p.che+c.che;
			mat=p.mat+c.mat;
		}
		void display()
		{
			cout<<phy<<" "<<che<<" "<<mat<<endl;
		}
};
int main()
{
	exam p,c,pc;
	p.read();
	c.read();
	pc.tot(p,c);
	pc.display();
	return 0;
}
