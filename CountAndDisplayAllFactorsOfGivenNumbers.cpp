#include <iostream>
using namespace std;
int main()
{
	int a,b,n;
	cout<<endl<<"enter a number";
	cin>>b;
	n=0;
	for(a=1;a<=b;a++)
	{
		if(b%a==0)
			{cout<<endl<<a;
			n++;
			}
	}
	cout<<endl<<"no of factors="<<n;
}
