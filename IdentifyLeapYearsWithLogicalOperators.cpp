#include <iostream>
using namespace std;
int main()
{
  int year;
  cout<<endl<<"enter the year";
  cin>>year;
  
  if(year%400==0 || (year%100!=0&&year%4==0))
  	cout<<endl<<year<<"  is a leap year";
  else
  	cout<<endl<<year<<"is not a leap year";
  	
  cout<<endl<<"program over...";	
}
