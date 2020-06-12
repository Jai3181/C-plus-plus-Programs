#include <iostream>
#include <conio.h>
using namespace std;
int main()
/*
//method 1
{
	int i;
	char pass[15];
	cout<<"enter the password";
	cin.get(pass,15);
	for(i=0;pass[i]!='\0';i++);
	
	if(i==9 && pass[0]=='j'&& pass[1]=='a'&& pass[2]=='i'&& pass[3]=='s'&& pass[4]=='a'&& pass[5]=='n'&& pass[6]=='g'&& pass[7]=='h'&& pass[8]=='i')
	cout<<endl<<"access granted";
	else
	cout<<endl<<"access denied";	
}
*/
//method 2
{	
	int i,flag;
	char pass[15],ch;
	char pc[] = {"idontknow"};		//password=idontknow
	cout<<"enter the password";
	for(i=0;;i++)
	{
		ch=getch();
		if(ch==13)
			break;
		pass[i]=ch;
		cout << "*";
	}
	pass[i]='\0';
	flag=0;
	for(i=0;i<9;i++)
	{
		if(pass[i]!=pc[i])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
		cout<<endl<<"access granted";
	else
		cout<<endl<<"access denied";	
		
}
