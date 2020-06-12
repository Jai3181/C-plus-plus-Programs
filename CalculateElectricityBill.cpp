//wap to calculate the electricity bill based on the previous and pesent readings
#include <iostream>
using namespace std;
int main()
{
	float a,b,c,d,p;
	
	cout<<endl<<"enter the previous reading";
	cin>>a;
	
	cout<<endl<<"enter present reading";
	cin>>b;
	
	c=b-a;
	cout<<endl<<"number of units consumed = " <<c;
	
	if(c>400)
	{	d=c-400;
		p=850+d*5;
	}
	
	else if(c>=300)
		{
			d=c-300;
			p=500+d*3.5;
		}
		
	else if(c>=200)
		{
			d=c-200;
			p=250+d*2.5;
		}
	
		
	else if(c>=100)
		{
			d=c-100;
			p=100+d*1.5;
		}	
		
	else if(c>=0)
		{
			p=c;
		}
	
	else 
		cout<< endl<< "invalid input";
	
	cout<< endl <<"amount to be paid is " << p;
	
	cout<< endl<< "program over";
	
		
	
	
	
	
	
	
	 
}
