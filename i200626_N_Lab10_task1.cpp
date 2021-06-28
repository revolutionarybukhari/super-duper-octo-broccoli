#include<iostream>
using namespace std;

class String{
char * string;
int size;
 public:
  String(char *str);// initializes the string with constant cstring
  String& operator+(String str );// append a String at the end of string
 void display();
  String();// default constructor
 };
 
String::String()
{
	size=0;
	string=new char[size];
	string[size]='\0';
}
 String::String(char *str)
{
int counter=0;
	while(str[counter]!='\0')
	{
		counter++;
	}
	size=counter;
	string=new char [size];
	for(int i=0;i<size;i++)
	{
		string[i]=str[i];
	}
}
 
 void String::display()
 {
 int counter1=0;
	while(string[counter1]!='\0')
	{
		counter1++;
	}
 	for(int i=0;i<counter1;i++)
 	{
 		cout<<this->string[i];
 	}
 }
 
  String& String::operator+(String str )// append a String at the end of string
{
int sizee;
char *temp_array;
sizee=this->size+str.size;
temp_array=new char [sizee];
int c=0;
for(int i=0;i<sizee;i++)
{
	if(i<this->size)
	{
		temp_array[i]=this->string[i];
	}
	else
	{
		temp_array[i]=str.string[c];
		c++;
	}
}

delete []string;
this->size=sizee;
//this->string=new char [this->size];
this->string=temp_array;
return *this;
}

int main()
{
char arr1[100];
char arr[100];
// String s2;
 cout<<"Please enter a string 1:"<<endl;
  cin.getline(arr1,100);
  String s4(arr1);
  cout<<"Please enter a string 2:"<<endl;
  cin.getline(arr,100);
  String s2(arr);
  String merged=s4.operator+(s2);
  cout<<"\n Displaying the new string\n";
  merged.display();
}
