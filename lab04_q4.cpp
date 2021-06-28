#include<string>
#include<iostream>
using namespace std;

string Reverse(string str,int size)
{
string a,b;
	if(size<0)
	{
	return "";
	}
	
	else
	{	 
		 a=str[size];
		b=Reverse(str,size-1);
		return a  + b; 
	}
return Reverse( str,size);
}
int main()
{
string str;
int size=0;
cout<<"Enter a string";
cin>>str;

for(int i=0;str[i]!='\0';i++)
{

size++;
}

cout<<Reverse(str,size);

}
