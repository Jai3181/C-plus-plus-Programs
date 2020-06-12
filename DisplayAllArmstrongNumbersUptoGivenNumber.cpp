//wap to display all armstrong numbers upto given number
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a,b,c,d,e,f,l,i,z;
	cout<<endl<<"enter a number";
	cin>>i;
	for(z=1;z<=i;z++)
	{
	a=z;	
	b=a;
	c=a;
	l=0;
	e=0;
	for(;c>0;c=c/10)
		{
			l++;
		}
	for(;a>0;a=a/10)
		{	d=a%10;
			f=pow(d,l);
			e=e+f;
		}
		if(e==b)
		cout<<endl<<b;
	}
	cout<<endl<<"program over";
}
