#include <iostream>
using namespace std;
int main()
{
	int a,b,i,d,f;
	char s[20],c[20],pass[15];
	
	{
		cout<<endl<<"enter some text: ";
		cin.get(s,20);
		for(a=0;s[a]!='\0';a++)
		{	}
		cout<<"no. of characters are :"<<a;		
		
		//method 1
/*		for(b=a-1,i=0;b>=0;b--,i++)
		{
			c[i]=s[b];
		}
		cout<<endl<<"reverse string is:";
		for(i=0;i<a;i++)
		cout<<c[i];
		
		for(b=0,i=0,d=0;b<=a,i<=a;b++,i++)
		{
			if(s[b]==c[i])
			d++;
		}
		d--;
		if(d==a)
		cout<<endl<<"string is a palindrome";
		else
		cout<<endl<<"string is not a palindrome";
		}							
		*/ 
		
		
		//method 2
		for(b=0,f=0;b<=(a/2)-1;b++)
		{
			if(s[b]!=s[a-b-1])
			{
				cout<<endl<<"it is not a palindrome";
				f++;
				break;
			}
		}
		if(f==0)
		cout<<endl<<"it is a palindrome";	
		} 			

}



	
