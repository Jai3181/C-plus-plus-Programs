//wap to calculate and display sum of even numbers from 1 to given number
#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<endl<<"enter a number";
	cin>>b;
	c=0;
	for(a=1;a<b;a++)
	{
		if(a%2==0)
		{
			cout<<a<<"+";
			c=a+c;
		}
	}
	if(b%2==0)
		{
			c=b+c;
			cout<<b<<"=";
		}
	else
		 cout<<"0 =";	
	cout<<c;
}
