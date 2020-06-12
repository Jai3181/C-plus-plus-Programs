#include <iostream>
using namespace std;
class operation
{
	private:
		operation(){}
		
	public:
	void static add(int a,int b)
		{
			cout<<endl<<a<<"+"<<b<<":"<<a+b;
		}
	
	void static add(float a,float b)
		{
			cout<<endl<<a<<"+"<<b<<":"<<a+b;
		}
		
	void static add(char a,char b)
		{
			cout<<endl<<a<<"+"<<b<<":"<<a<<b;
		}	
		
	void static add(char a[],char b[])
		{
			cout<<endl<<a<<"+"<<b<<":"<<a<<b;
		}			
};
int main()
{
			//no need of object creation as function used here purly depends on parameters only
		//instead of object creation directly call function using scope resolution(class name::functionname( , ))
	operation::add(4,5);
	operation::add(3.7f,4.3f);  //f represents float values
	operation::add('A','a');
	operation::add("abc","def");	
}

