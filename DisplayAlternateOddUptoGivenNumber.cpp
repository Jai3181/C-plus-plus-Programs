//wap to display alternate odd numbers
#include <iostream>
using namespace std;
int main()
{
	int a;
	for(a=0;a>=0;a++)
	{
		if(a%2==0 && a%4!=0)
		cout<<endl<<a-1;
	}
}
