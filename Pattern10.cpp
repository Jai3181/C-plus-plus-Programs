#include <iostream>
using namespace std;
int main()
{
	int a,b;
	for(a=1;a<=5;a++)
	{
		for(b=5;b>=1;b--)
		{   if(b>a)
			cout<<" ";
			else if(b<=a)
			cout<<b;
		}
		cout<<endl;
	}
}
