#include<iostream>
using namespace std;

class Set
{
public:
int *ptr;
int size;


Set(int size)
{
this->size=size;
ptr=new int[size];
}
void setarray()
{

cout<<"Please enter values"<<endl;

for(int i=0;i<size;i++)
{
cin>>ptr[i];
}

}

~Set()
{
delete ptr;
}

Set operator+ (Set& second)
{
Set temp(this->size+second.size);
int common[10]={0};
for(int i=0;i<size+second.size;i++)
{
	temp.ptr[i]=0;
}
int num=0,pos=0,pos2=0;
for(int i=0;i<size;i++)
{
	for(int j=0;j<size;j++)
	{
		if(this->ptr[i]==second.ptr[j])
		{
			common[num]=this->ptr[i];
			num++;
		}
	}
}

for(int i=0;i<num;i++)
{
	temp.ptr[i]=common[i];
}
temp.display();

return temp;
}


Set operator- ( Set& second)
{
Set temp1(size);
bool flag;
int common[20]={0};
for(int i=0;i<size;i++)
{
	temp1.ptr[i]=0;
}

int num=0;
for(int i=0;i<this->size;i++)
{
	flag=true;
	for(int j=0;j<size;j++)
	{
		if(this->ptr[i]==second.ptr[j])
		{
			flag=false;

		}
		else{

		}
	}
	if(flag==true)
	{
	temp1.ptr[num]=this->ptr[i];
					num++;
	}
}
temp1.display();
return temp1;
}

void display()
{
for(int i=0;i<size;i++)
{
cout<<ptr[i]<<" ";
}

}
int getsize()
{
return this->size;
}

void displayset()
{
for(int i=0;i<size;i++)
{
	cout<<this->ptr[i]<<endl;
}

}


};
int main()
{
int size1,size2;
cout<<"Please enter the size of array1:"<<endl;
cin>>size1;
Set s1(size1);
cout<<"Please enter the size of array2:"<<endl;
cin>>size2;

Set s2(size2);

int *ptr2;
cout<<"Enter valus of 1st array"<<endl;
s1.setarray();
cout<<"Enter valus of 2nd array"<<endl;
s2.setarray();

cout<<"Array 1:"<<endl;
s1.display();
cout<<endl<<"Array 2:"<<endl;
s2.display();
cout<<endl;
cout<<"UNion"<<endl;
Set s3(size1+size2);
s3=s1.operator+ (s2);
//s3.displayset();
cout<<endl<<"Difference"<<endl;
Set s4(size1);
s4=s1.operator- (s2);
//s4.displayset();


return 0;
}

