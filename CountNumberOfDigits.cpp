//wap to count number of digits
#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<endl<<"enter a number";
	cin>>a;
	b=0;
	for(;a>0;a=a/10)
	{
		b++;
	}
	cout<<endl<<b; 
}
