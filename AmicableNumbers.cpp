#include <iostream>
using namespace std;
int main(){
	int a,b,c,d,e,f;
	cout<<" Enter 2 numbers : ";
	cin>>a>>b;
	d=f=0;
	for(c=1;c<a;c++)
	{
		if(a%c==0)
		{
			d+=c;
		}
	}
	for(e=1;e<b;e++)
	{
		if(b%e==0)
		{
			f+=e;
		}
	}
	if(d==b&&f==a)
	cout<<a<<" and "<<b<<" are amicable numbers..";
	else
		cout<<a<<" and "<<b<<" are not amicable numbers..";
}
