#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<"\nbefore swapping"<<a<<b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"\nAfter swapping"<<a<<b;
	return 0;
}
