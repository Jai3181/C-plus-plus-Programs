#include <iostream>
using namespace std;
int main()
{
	int a,b,c,n;
	cout<<endl<<"enter a number";
	cin>>c;
	{
			n=0;
			b=0;
			for(a=1;a<=c;a++)
			{ 
			    b++;
				if(c%a==0)
				n++;
			}
	}
	if(n==2)	
	cout<<endl<<c<<"is a prime number";
	else 
	cout<<endl<<c<<"is a composite number";
	
	cout<<endl<<"no. of loops="<<b;
}
