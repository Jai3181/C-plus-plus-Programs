#include<iostream>
using namespace std;
int main()
{
	int y,m,d;
	
	cout<<endl<<"enter the year";
	cin>>y;
	cout<<endl<<"enter the month";
	cin>>m;
	cout<<endl<<"enter the date";
	cin>>d;
	if(y>0)
	{
	
	
		if(  (m==1||m==3||m==5||m==7||m==8||m==10||m==12 ) && d>=1 &&d<=31)
			cout<<endl<<"date is valid";		
		else if(  (m==4||m==6||m==9||m==11 ) && d>=1 && d<=30)
			cout<<endl<<"date is valid";	
		else if( m==2 && (y%400==0 || (y%4==0&&y%100!=0)) && d>=1 &&d<=29 )	
			cout<<endl<<"date is valid";	
		else if( m==2 &&  d>=1 &&d<=28 )	
			cout<<endl<<"date is valid";	
		else
			cout<<endl<<"date is invalid";
		
	}
	else
	cout<<endl<<"year is invalid";
		
		
	cout<<endl<<"program over";
	
}

