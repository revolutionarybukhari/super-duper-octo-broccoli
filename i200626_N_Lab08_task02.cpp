#include<iostream>
using namespace std;

class IntegerList
{
int *list;// A pointer to an int
int numElements;
public:

IntegerList(int);
IntegerList(const IntegerList& intList);
bool isValid(int);// This function validates a subscript into the array
void setElement(int, int); // The setElement member function sets a specific element of the list array to a value
int getElement(int);// The getElement member function retrieves a value from a specific element in the list array

};


IntegerList::IntegerList(int a)
{
this->numElements=a;
list=new int[a];
for(int i=0;i<a;i++)
{
	list[a]=0;
}

}
IntegerList::IntegerList(const IntegerList& intList)
{
this->numElements=intList.numElements;
list=new int[this->numElements];

for(int i=0;i<this->numElements;i++)
{
	this->list[i]=intList.list[i];
}
}
bool IntegerList::isValid(int number)
{
	if(number>=0 && number<=(numElements-1))
	{
		return true;
	}
	else
	{
		return false;
	}
}
void IntegerList::setElement(int pos, int val)
{
	if(IntegerList::isValid(pos))
	{
		list[pos]=val;
	}
	else
	{
		exit(0);
	}
}
int IntegerList::getElement(int pos)
{
if(IntegerList::isValid(pos))
	{
		return list[pos];
	}
	else
	{
		exit(0);
	}
}


int main()
{
int elements,range,pos,val;
cout<<"1st  constructor"<<endl;
cout<<"Enter number of elements:"<<endl;
cin>>elements;
IntegerList first(elements);


cout<<"Check range , enter a number:"<<endl;
cin>>range;
cout<<first.isValid(range)<<endl;

cout<<"Set element enter a position and a val";
cin>>pos>>val;
first.setElement(pos,  val);
cout<<"val assigned"<<endl;

cout<<"Get values enter position"<<endl;
cin>>pos;
cout<<first.getElement(pos)<<endl;


cout<<"Parameterized 2nd constructor"<<endl;
IntegerList second(first);

cout<<"Check range , enter a number:"<<endl;
cin>>range;
cout<<second.isValid(range)<<endl;

cout<<"Set element enter a position and a val";
cin>>pos>>val;
second.setElement(pos,  val);
cout<<"val assigned"<<endl;

cout<<"Get values enter position"<<endl;
cin>>pos;
cout<<second.getElement(pos)<<endl;

return 0;
}
