#include <iostream>
#include "date.h"
using namespace std;
int main()
{
	date d;
	cout<<"Enter date:";
	cin>>d.d>>d.m>>d.y;
	cout<<"The date is "<<d.d<<"/"<<d.m<<"/"<<d.y<<endl;
	return 0;
}
