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
		cout<<a<<'+';
	 	c=a+c;
	}
	cout<<b<<"=";
	c=b+c;
	cout<<c;
}
