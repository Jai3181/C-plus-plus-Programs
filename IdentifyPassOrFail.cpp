//wap to check if the student has passed or failed
#include <iostream>
using namespace std;
int main()
{
	char name[20];
	int m1,m2,m3,m4,m5;
	
	cout<<endl<<"enter the name";
	cin>>name;
	cout<<endl<<"enter the marks";
	cin>>m1>>m2>>m3>>m4>>m5;
	
	if(m1>=35&&m2>=35&&m3>=35&&m4>=35&&m5>=35)
	cout<<endl<<name<<"  has passed";
	else
	cout<<name<<"  has failed";
	
	cout<<endl<<"program over";
		
}
