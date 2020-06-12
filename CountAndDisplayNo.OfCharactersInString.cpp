/*wap to (1)count and display no. of characters in a string
(2) display string in reverse order
(3) count and display the number of vovels
(4)convert small to cap and cap to small
(5)*/
#include <iostream>
using namespace std;
int main()
{
	int a,v,x,y;
	char s[20];
	cout<<endl<<"enter some text: ";
	cin>>s;
	for(a=0;s[a]!='\0';a++)
	{
	}
	cout<<endl<<"no. of characters = "<<a;
	
	//(2)
	cout<<endl<<"reverse string is: ";
	for(;a>=0;a--)
	cout<<s[a];
	
	//(3)
	for(a=0,v=0;a<20;a++)
	{
	 if(s[a]=='a'||s[a]=='e'||s[a]=='i'||s[a]=='o'||s[a]=='u'||s[a]=='A'||s[a]=='E'||s[a]=='I'||s[a]=='O'||s[a]=='U')
		v++;
	}
	cout<<endl<<"no. of vovels:"<<v;
	
	//(4)
	for(a=0,x=0,y=0;a<20;a++)
	{
		if(s[a]>65 && s[a]<90)
		{    
			s[a]=s[a]+32;
			x++;
		}
		else if(s[a]>97 && s[a]<122)
		{
			s[a]=s[a]-32;
			y++;
		}
	}
	cout<<endl<<"case swapped string is "<<s;
	
	//(5)
	
	cout<<endl<<"no. of small alphabets are "<<x;
	cout<<endl<<"no. of capital alphabets are "<<y;
	
	
	
	
	
}
