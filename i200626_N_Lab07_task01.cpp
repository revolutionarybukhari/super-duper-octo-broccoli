#include<iostream>
#include<string>
using namespace std;

class student
{
int age;
string  firstname;
string lastname;
int standard;

public:

student()
{
age=0;
firstname=".";
lastname=".";
standard=0;

}

student(int a,string b,string c,int d)
{
  age=a;
  firstname=b;
  lastname=c;
  standard=d;
}

int getAge()
{
return age;
}

void setAge(int i)
{
age=i;

}

string getFirstName()
{
return firstname;
}

void setFirstName(string name)
{
firstname=name;
}

string getLastName()
{
return lastname;
}

void setLastName(string name1)
{
lastname=name1;
}


int getStandard()
{
return standard;
}
void setStandard(int a)
{
standard=a;
}

string toString()
{
string age=to_string(getAge());
string standard=to_string(getStandard());
string result =age+","+(firstname)+","+(lastname)+","+standard;
return result;
}


};


int main()
{
student s1;
int age;
string f1;
string l1;
int s;
cout<<"Enter age:";
cin>>age;
s1.setAge(age);
cout<<"Enter First Name ";
cin>>f1;
s1.setFirstName(f1);
cout<<"Enter Last Name:";
cin>>l1;
s1.setLastName(l1);
cout<<"Enter standard:";
cin>>s;
s1.setStandard(s);

cout<<s1.toString();


return 0;
}

