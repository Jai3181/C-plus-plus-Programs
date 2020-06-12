#include <iostream>
using namespace std;
int main()
{
	int avg;
	cout<< endl<< "enter the average";
	cin>> avg;
	
	if(avg>=90)
	cout<< endl << "A+ grade";
	
	else if(avg>=80)
	cout<< endl << "A grade";
	
	else if(avg>=70)
	cout<< endl << "B+ grade";
	
	else if(avg>=60)
	cout<< endl << "B grade";
	
	else
	cout<< endl << "C grade";
}
