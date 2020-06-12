#include <iostream>
using namespace std;
int main()
{
	int a,b,n;
	cout<<endl<<"enter two years";
	cin>>a>>b;
	n=0;
	for(;a<=b;a++)
	{
		if(a%4==0&&a%100!=0 || a%400==0)
		{
			cout<<endl<<a;
			n++;
		}
	}
	cout<<endl<<n;
}
