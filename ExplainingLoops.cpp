//wap to display numbers from one given number to another given number
#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<endl<<"enter two numbers";
	cin>>a>>b;
	
	/*while(a<=b)   //condition
	{                                         //while loop
		cout<<endl<<a;
		a++;    //reassignment
	}*/
	
	/*do
	{                                         // do while loop
		cout<<endl<<a;
	a++;
	}
	while(a<=b);*/
	
	for(;a<=b;a++)                            // for loop
	{
		cout<<endl<<a;
	}
	
	cout<<endl<<"program over";
}
