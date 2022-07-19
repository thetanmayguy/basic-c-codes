#include <iostream>
using namespace std;
inline float cube(float n)
{
	return (n*n*n);
}
int main()
{
	cout<<cube(4)<<endl<<cube(3.3)<<endl;
	return 0;
}
