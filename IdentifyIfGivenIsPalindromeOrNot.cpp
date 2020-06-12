//wap to identify if given number is palindrome or not
#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<endl<<"enter a number";
	cin>>a;
	c=a;  //taking backup of a because it will expire(=0) after the loop
	cout<<endl<<"reverse number is: ";
	d=0;
	for(;a>0;a=a/10)
	{
		b=a%10;
		cout<<b;
		d=(d*10)+b;
	}
	if(d==c)
	cout<<endl<< c <<" is a palindrome";
	else
	cout<<endl<< c <<" is not a palindrome";
}
