#include <iostream>
using namespace std;
int max(int a,int b)
{
	return (a>b?a:b);
}
float max(float a,float b)
{
	return (a>b?a:b);
}
int main()
{
	cout<<max(1,2)<<endl;
	cout<<max(2.2,3.9)<<endl;
	return 0;
}
