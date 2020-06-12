//wap to identify if given number is armstrong number or not
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a,b,c,d,e,f,l;
	cout<<endl<<"enter a number";
	cin>>a;
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
		cout<<endl<<b<<" is an armstrong number";
		else
		cout<<endl<<b<<" is not an armstrong number";
}
