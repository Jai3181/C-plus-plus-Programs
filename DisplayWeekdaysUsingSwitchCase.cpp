//wap to display weekdays for the given number using switch
#include <iostream>
using namespace std;
int main()

{
	int a;
	cout<<endl<<"enter a number";
	cin>>a;
	
	switch(a)
	{
		case 1:
			cout<<endl<<"sunday";
			break;
		case 2:
			cout<<endl<<"monday";
			break;
		case 3:
			cout<<endl<<"tuesday";
			break;		
		case 4:
			cout<<endl<<"wednesday";
			break;
		case 5:
			cout<<endl<<"thirsday";
			break;
		case 6:
			cout<<endl<<"friday";
			break;
		case 7:
			cout<<endl<<"saterday";
			break;
		default:
			cout<<endl<<"invalid input";	
							
	}
	
	
}

