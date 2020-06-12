//wap to sort an array
#include <iostream>
using namespace std;
int main()
{
	int a[10],b,c,i,l;
	i=0;
	cout<<endl<<"enter 10 numbers";
	for(b=0;b<10;b++)
	cin>>a[b];
	
	cout<<endl<<"current array is:";
	for(b=0;b<10;b++)
	cout<<" "<<a[b];
	
	for(c=0;c<9;c++)
	{
		for(b=0;b<9-c;b++)
		{
		if(a[b]>a[b+1])
		{
			i=a[b];
			a[b]=a[b+1];
			a[b+1]=i;
		}
		l++;
		}
	}
	cout<<endl<<"new array is: ";
	for(b=0;b<10;b++)
	cout<<" "<<a[b];
	cout<<endl<<"no. of loops = "<<l;
}
