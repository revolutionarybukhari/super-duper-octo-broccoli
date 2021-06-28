#include<iostream>
using namespace std;

struct student
{
int rollno;
char name[20];
int age;
char address[30];



int maxage()
{

	return age;	
	
}

int evenroll()
{
	return rollno;
}

void datadisplay(int rollno,char *name,int age,char *address)
{
	cout<<"rollno:"<<rollno<<endl;
	cout<<"name:"<<name<<endl;
	cout<<"age:"<<age<<endl;
	cout<<"address:"<<address<<endl;
}

};


void mage(int age,int i,student data[])
{

	if(age==14)
	{
		cout<<data[i].name<<endl;	
	}
	
	
}

void evenno(int rollno,int i,student data[])
{
	if(rollno %2==0 )
	{
		cout<<data[i].name<<endl;
	}
}

void alldata(student data[],int i)
{
	cout<<"rollno:"<<data[i].rollno<<endl;
	cout<<"name:"<<data[i].name<<endl;
	cout<<"age:"<<data[i].age<<endl;
	cout<<"address:"<<data[i].address<<endl;
	
	
}
int check(int i)
{

int answer;
if(i>=11 && i<=14)
{
return i;
}
else
{
cout<<"invalid Age enter again bw 11 and 14:"<<endl;
cin>>answer;
check(answer);

}

}

int main()
{
int size,age,roll;
bool flag=false;
cout<<"---------------------------	Welcome	------------------------------"<<endl;
cout<<"How many students data do you want to enter?"<<endl;
cin>>size;

student data[size];

for(int i=0;i<size;i++)
{
cout<<"Enter rollno:";
	cin>>data[i].rollno;
	cout<<"Enter Name:";
	cin>>data[i].name;
	cout<<"Enter age:";
	cin>>data[i].age;
	data[i].age=check(data[i].age);
	cout<<"Enter address:";
	cin>>data[i].address;	
}

cout<<endl<<endl;
if(flag==false)
{
	cout<<"Students with age 14:"<<endl;
	for(int i=0;i<size;i++)
	{
	age=data[i].maxage();
	mage(age,i,data);		
	}
	cout<<endl<<endl;
	cout<<"Students with even roll:"<<endl;
	for(int i=0;i<size;i++)
	{
	roll=data[i].evenroll();
	evenno(roll,i,data);		
	}
	cout<<endl<<endl;
	cout<<"details of student with rollno.:"<<endl;
	for(int i=0;i<size;i++)
	{
	cout<<"Details of student number"<<i+1<<endl;

	alldata(data, i);
			
	}

}




return 0;
}
