#include <iostream>
using namespace std;
int main()
{
	string food;
	cout<<"Enter the food :";
	cin>>food;
	string &meal=food;
	cout<<food<<endl<<meal<<endl;
	return 0;
}
