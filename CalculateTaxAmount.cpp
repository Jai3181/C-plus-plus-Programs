//wap to calculate tax fopr the income based on given tax slabs
#include <iostream>
using namespace std;
int main()
{
	int i,j,t;
	cout<<endl<<"enter the income amount";
	cin>>i;
	
	if(i>=35000)
	{
		j=i-35000;
		t=4000+j*0.2;
	}
	else if(i>=15000)
	{
		j=i-15000;
		t=1000+j*0.15;
	}
	else if(i>5000)
	{
		j=i-5000;
		t=j*0.1;
	}
	else
	cout<<endl<<"no tax";
	
	cout<<endl<<"tax payable is "<<t;
	
}

