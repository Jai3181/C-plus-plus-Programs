#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<< endl << "enter three numbers :";
	cin>> a >> b>> c ;
	cout<< "first value :" << a << endl << "second value :" << b << endl << "third value :" << c ;
	cout<< endl << "addition :" << a+b+c ;
	cout<< endl << "average :" << (float)(a+b+c)/3 ;
	cout<< endl << "multiplication :" << a*b*c ;
	return 0 ;
}
