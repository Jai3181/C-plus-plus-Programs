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
	
	if(n==2)
	 cout<<endl<<b<<" is prime number"
	else if(n==1)
	 cout<<endl<<b<<"is niether prime nor composite";
	else
	 cout<<endl<<b<<" is a composite number"; 
}

