//wap to check if given number is automorphic or not
#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<endl<<"enter a number";
	cin>>a;
	a=b;
	c=a*a;
	cout<<endl<<"square of "<< a <<" is: "<<c;
	while(a>0)
	{
		if(a%10 != c%10)
		{
			break;
		}
		a/=10;
		c/=10;
	}
	if(a==0)
	cout<<endl<<b<<" is a automorphic number";
}

