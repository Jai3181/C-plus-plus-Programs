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
			for(a=2;a<c/2;a++)
			{ 
			    b++;
				if(c%a==0){
					n++;
					break;
				}
				
			}
		}
	if(n==0)	
	cout<<endl<<c<<"is a prime number";
	else 
	cout<<endl<<c<<"is a composite number";
	
	cout<<endl<<"no. of loops="<<b;
}
