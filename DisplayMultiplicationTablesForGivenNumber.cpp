#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<endl<<"enter the number whose table is required";
	cin>>a;
	cout<<endl<<"enter the number till where table is required";
	cin>>b;
	while(c<=b)
	{
		cout<<endl<<a<<"x"<<c<<"="<<a*c;
		c++;
	}
	cout<<endl<<"khush ho ja ab";
	
}
