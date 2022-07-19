#include <iostream>
using namespace std;
int max(int a,int b)
{
	return (a>b?a:b);
}
int max(int a,int b,int c)
{
	int d;
	if(a>b)
		d=a;
	else
		d=b;
	if(c>d)
		return c;
	return d;
}
int max(int a[],int n)
{
	int i;
	int m=a[0];
	for(i=0;i<n;i++)
		if(a[i]>m)
			m=a[i];
	return m;
}
int main()
{
	int a=max(1,2);
	cout<<a<<endl;
	cout<<max(1,2,3)<<endl;
	cout<<max(5,4)<<endl;
	int b[]={1,2,3,4,5,6};
	int n=sizeof(b)/sizeof(int);
	cout<<max(b,n)<<endl;
	return 0;
}
