//wap to display all palindrome from 1 to given number
#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,l;
	cout<<endl<<"enter a number";
	cin>>e;
	l=0;
	for(a=1;a<=e;a++)
	{   
		d=0;
		c=a;  //taking backup of a because it will expire(=0) after the loop
		for(;c>0;c=c/10)
		{
			b=c%10;
			d=(d*10)+b;
		}
		if(d==a)
			{cout<<endl<<a;
			l++;
			}
	}
	cout<<endl<<"number of palindromes = "<<l;
}
