#include <iostream>
using namespace std;
int main()
{
	int a[20],n,i;
	cout<<"Enter the size of array: ";
	cin>>n;
	cout<<"Enter the array elements:-"<<endl;
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<"The array elements are:-\n";
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
