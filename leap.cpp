#include <iostream>
int main()
{
	int n;
	std::cout<<"Enter the year:";
	std::cin>>n;
	if(n%400==0)
		std::cout<<"Leap!\n";
	else if((n%4==0)&&!(n%100==0))
		std::cout<<"Leap!\n";
	else
		std::cout<<"Not a leap year\n";
}
