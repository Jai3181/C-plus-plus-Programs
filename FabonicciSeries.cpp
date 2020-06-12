//wap to add and display some series_x
#include <iostream>
using namespace std;
int main()
{
	int a,b,c,n,l;
	cout<<endl<<"enter a number";
	cin>>n;
	a=0;
	b=0;
	c=a+b;
	l=0;
	for(b=0;b<=n;b++)
	{ l++;
		cout<<"   "<<c;
		a=c;
		c=a+b;
	}
	cout<<endl<<"no of loops = "<<l;
}
