#include <iostream>
using namespace std;
void swap(int *a,int *b)
{
	int t=(*a);
	(*a)=(*b);
	(*b)=t;
}
int main()
{
	int a,b;
	cout<<"Enter a,b values :";
	cin>>a>>b;
	swap(&a,&b);
	cout<<"a="<<a<<" b="<<b<<endl;
	return 0;
}
