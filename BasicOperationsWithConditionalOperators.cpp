#include <iostream>
using namespace std;
int main()
{
	int a,b,z;
	char o;
	cout<<endl<<"enter the operator";
	cin>>o;
	cout<<endl<<"enter two numbers";
	cin>>a>>b;
	z= ((o=='+')?a+b:(o=='-')?a-b:(o=='*')?a*b:(o=='/')?a/b:(o=='%')?a%b:0);
	cout<<endl<<z;
	
}
