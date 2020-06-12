//wap to display fibonacci series from 1 to given number
#include <iostream>
using namespace std;
int main()
{
	int a,b,c,n;
	a=0;
	b=1;
	c=0;
	cout<<endl<<"enter a number";
	cin>>n;
	while(c<=n)
		{
		cout<<" "<<c;
		a=b;
		b=c;
		c=a+b;
		}
}
