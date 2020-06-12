//wap to display reverse of given number
#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<endl<<"enter a number";
	cin>>a;
	cout<<endl<<"reverse number is: ";
	for(;a>0;a=a/10)
	{
		b=a%10;
		cout<<b;
	}
}
