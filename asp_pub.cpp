#include <iostream>
using namespace std;
class cir
{
	public:
	int r;
};
int main()
{
	cir c;
	cout<<"Enter the radius:";
	cin>>c.r;
	cout<<"Area="<<(3.142*(c.r)*(c.r))<<" sq units"<<endl;
	return 0;
}
