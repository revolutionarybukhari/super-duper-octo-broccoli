#include<iostream>
using namespace std;

void printPattern3(int start,int end,char p);



		

void pattern(int start,char p);
void printPattern3(int start,char p)
{


	if(start==0 )
	{
	
	 return;
	}
	else
	{	
		
			printPattern3(start-1,p);
			pattern(start,p);
			cout<<endl;

			
	}

	
}
void pattern(int start,char p)
{


if(start==0)
{
     	
return;
}
else
{  
	cout<<p;
	
	pattern(start-1,p);
}	

	
}
int main()
{
char p;
int l;
cout<<"enter char:"<<endl;
cin>>p;
cout<<"enter lines:";
cin>>l;
printPattern3(l,p);

return 0;
}

