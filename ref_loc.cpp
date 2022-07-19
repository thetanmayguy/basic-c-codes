#include <iostream>
using namespace std;
int& ref()
{
	int a=10;
	int &b=a;
	return b;
}
int main()
{
	int c=ref();
	cout<<c;
	return 0;
}
