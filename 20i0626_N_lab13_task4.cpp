#include<iostream>
using namespace std;


class Person
{
protected:
string name;
int year_of_birth;
public:

Person()
{
	name="";
	year_of_birth=0;
}

Person(string s,int a)
{
	name=s;
	year_of_birth=a;
}
void display()
	{
		cout<<"Name: "<<name<<endl;
		cout<<"Year OF Birth: "<<year_of_birth<<endl;
	}
};

class Student:public Person
{
protected:
int studentID;
int enrolledSemester;
int deptID;
string deptName;
public:

Student():Person()
{
studentID=0000;
enrolledSemester=0;
deptID=00;
deptName="";
}
Student(string s,int year,int std_id,int sem,int di,string dn):Person(s,year)
{
studentID=std_id;
enrolledSemester=sem;
deptID=di;
deptName="";
}

void display()
{
		cout<<"*************Student Details***************\n\n";
		cout<<"Name: "<<name<<endl;
		cout<<"Year Of Birth"<<year_of_birth<<endl;
		cout<<"Identity Number: "<<studentID<<endl;
		cout<<"Enrolled Semester: "<<enrolledSemester<<endl;
		cout<<"Department ID: "<<deptID<<endl;
		cout<<"Department Name: "<<deptName<<endl;
}

};


class Employee : public Person
{
protected:
	int employeeID;
	int joiningYear;
public:
Employee():Person()
{
employeeID=000;
joiningYear=0000;
}

Employee(int id , int yr,string s,int yy):Person(s,yy)
{
employeeID=id;
joiningYear=yy;
}

void display()
	{
		cout<<"Name: "<<name<<endl;
		cout<<"Year Of Birth: "<<year_of_birth<<endl;
		cout<<"Employee Identity Number: "<<employeeID<<endl;
		cout<<"Employee Joining Year: "<<joiningYear<<endl;
	}
};

class staff:Employee
{
protected:
	string jobTitle;
	string deptAllocation;
public:
staff():Employee()
{
	jobTitle="";
	deptAllocation="";
}

staff(string s1,string s2,int id,int yr,string name,int y):Employee(id,yr,name,y)
{
	jobTitle=s1;
	deptAllocation=s2;
}
void setJobTitle(string a)
{
	jobTitle=a;
}
string  getJobTitle()
{
return this->jobTitle;
}

void setdeptAllocation(string s)
{
	this->deptAllocation=s;
}
string getdeptAllocation()
{
	return deptAllocation;
}
void display()
{
	Employee::display();
	cout<<"Staff\n";
	cout<<"Job Title:"<<jobTitle;
	cout<<"Department Allocated:"<<deptAllocation;
}
};

class Faculty:Employee
{
protected:
	string department;
	int researchPublications;
public:
Faculty():Employee()
{
	department="";
	researchPublications=0;
}
Faculty(string aa,int b,int id,int yr,string name,int y):Employee(id,yr,name,y)
{
	department=aa;
	researchPublications=b;
}

void setdpt(string a)
{
	department=a;
}
void setRP(int b)
{
	researchPublications=b;
}
string getdpt()
{
	return department;
}
int getRP()
{
	return researchPublications; 
}

void display()
	{
		cout<<"\n\nFaculty\n";
		Person::display();
		Employee::display();

		cout<<"Department: "<<department<<endl;
		cout<<"Publications Count: "<<researchPublications<<endl;
	}


};

int main()
{

	Student std("Husnian", 2002, 99, 2, 113, "DS");
	std.display();

	staff stf("Haider", "Admin", 4444, 1990, "CS Academics",1970);
	stf.display();
//Faculty(int a,int b,int id,int yr,string name,int y):Employee(id,yr,name,y)
	Faculty fcl1("Computing", 25, 7777, 2005, "Prof.Shah", 1990);
	fcl1.display();

return 0;
}


