// WAP to identify the day for the given date
#include <iostream>
using namespace std;
int main()
{
	int y,m,d,j,f;
	cout<< endl << "enter the year   ";
	cin>>  y;
	cout<< endl << "enter the month  ";
	cin>>  m;
	cout<< endl << "enter the date   ";
	cin>>  d;
	    
	    if(y%400!=0)
			if(m==1)
			j=d;
			else if(m==2)
			j= 31+d;
			else if(m==3)
			j= 31+28+d;
			else if(m==4)
			j=31+28+31+d;
	    	else if(m==5)
	    	j=31+28+31+30+d;
	    	else if(m==6)
	    	j=31+28+31+30+31+d;
	    	else if(m==7)
	    	j=31+28+31+30+31+30+d;
	    	else if(m==8)
	    	j=31+28+31+30+31+30+31+d;
	    	else if(m==9)
	    	j=31+28+31+30+31+30+31+31+d;
	    	else if(m==10)
	    	j=31+28+31+30+31+30+31+31+30+d;
	    	else if(m==11)
	    	j=31+28+31+30+31+30+31+31+30+31+d;
	    	else if(m==12)
	    	j=31+28+31+30+31+30+31+31+30+31+30+d;
	    	else
	    	cout<< "invalid month";  
	    
	    if(m>=3)
		{			
		    if(y%400==0)
			{
		    	j++;
			}
			else if(y%100!=0)
			{
				if(y%4==0)
				{
					j++;
				}
			}
		}	

	    	
	f=(y+((y-1)/400)+((y-1)/4)+j-((y-1)/100))%7;
	
	if(f==0)
	cout<<"it is saturday";
	else if(f==1)
	cout<<"it is sunday";
	else if(f==2)
	cout<<"it is monday";
	else if(f==3)
	cout<<"it is tuesday";
	else if(f==4)
	cout<<"it is wednesday";
	else if(f==5)
	cout<<"it is thursday";
	else if(f==6)
	cout<<"it is friday";
	
	cout<< endl <<"program over";  
	    
}
		
		
    
