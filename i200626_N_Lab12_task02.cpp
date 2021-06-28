
#include<iostream>
#include<string>
using namespace std;


class Department
{
	int deptID;
	string deptName;
public:
	Department()
	{
	}
void setid(int i)
{
this->deptID=i;
}
void setdepname(string m)
{
this->deptName=m;
}
string getdepname()
{
	return this->deptName;
}
int getdepid()
{
	return this->deptID;
}

Department(int id,string name)
{
	deptID=id;
	deptName=name;
}
void display()
{
	cout<<"ID:"<<deptID;
	cout<<"Depart Name:"<<deptName<<endl;
}

};


class Laboratory
{
	int labID; 
	int experimentNo;
public:

void setlabid(int a)
{
	labID=a;
}
void setnum(int a)
{
	experimentNo=a;
}
int getlabid()
{
	return labID;
}
int getnum()
{
	return experimentNo;
}
Laboratory(int id,int no)
{
	labID=id; 
	experimentNo=no;
}
};




class Person 
{
string name;
int age;
public:

void setpname(string s)
{
	this->name=s;
}
void setpage(int a)
{
	this->age=a;
}
string getpname()
{
return name;
}
int getpage()
{
return age;
}

Person(string name,int val)
{
	this->name=name;
	age=val;
}
void display()
{
	cout<<"\nName:"<<name;
	cout<<"\nAge:"<<age<<endl;
}

};


class Professor:public Person
{
	//string profName;
	Department *dept;
 public:
 
void setdepartment(Department *d)
	{
		dept = d;
	}
 

Professor(string s ,Department *d,int a):Person(s,a)
{
	//setpname(s);
	//setpage(a);
	dept=d;
}
	
	string getdeptname()
	{
		return dept->getdepname();
	}

	int getdeptnum()
	{
		return dept->getdepid();
	}


};


class Researcher:public Professor
{
Laboratory *lab;

public:

Researcher(string nam,int ag,Department *d,Laboratory *l):Professor(nam,d,ag) 
{
	//setpname(nam);
	lab=l;
	//setpage(ag);
	//setdepartment(d);
}
void setlaboratory(Laboratory *l)
	{
		lab = l;
	}
	
void display()
{
		cout<<"\n****Researcher Details****\n";
		cout<<"Name: "<<getpname()<<endl;
		cout<<"Age: "<<getpage()<<endl;
		cout<<"Department Name: "<<getdeptname()<<endl;
		cout<<"Department ID: "<<getdeptnum()<<endl;
		cout<<"Lab ID: "<<lab->getlabid()<<endl;
		cout<<"Lab Exp No: "<<lab->getnum()<<endl;
}

};


class University
{
	string universityName;
	string location;
	Department *dept;
public:
University(string s,string l)
{
	universityName=s;
	location=l;
	dept = new Department[5];
	
}

void adddepartment(Department dpt, int i)
	{	//if(dept[i]==NULL)
	
			dept[i] = dpt;
	}	
	

	void deletedeparment(int i)
	{	
			dept[i].setdepname("");
			dept[i].setid(0);
		
	}

	void updatedepartment(int i)
	{	
		cout<<"Updating department\n\n";

		cout<<"\nEnter name: ";
				string n;
				cin>>n;
				dept[i].setdepname(n);
				cout<<"\nEnter ID: ";
				int n1;
				cin>>n1;
				dept[i].setid(n1);
	
	}

	void displaydepartments()
	{
		cout<<"\n\nDepartments At "<<universityName<<" located at "<<location<<endl<<endl;
		for (int i=0; i<5; i++)
		{
			if (dept[i].getdepid()==NULL)
			{
				continue;
			}
			else if(dept[i].getdepid()!=NULL)
			{
				cout<<"Department Name: "<<dept[i].getdepname()<<endl;
				cout<<"Department ID: "<<dept[i].getdepid()<<endl;
			}

			cout<<endl<<endl;
		}
	}


};


int main()
{
	University university("Islamabad", "SHAH");
	Department d1(101, "School of Computing");
	Department d2(99, "School of Engineering");
	Department d3(10, "School of Management");
	Department d4(102, "School of Law");
	Department d5(111, "School of Arts");
	Laboratory l1(99,1);
	Laboratory l2(21,20);
	university.adddepartment(d1,0);
	university.adddepartment(d2,1);
	university.adddepartment(d3,2);
university.adddepartment(d4,3);
university.adddepartment(d5,4);
	university.displaydepartments();

	Researcher res("Dr.Husnian Bukhari", 19, &d4,&l2);
	res.display();

	//delete depart
	university.deletedeparment(1);
	//update
	university.updatedepartment(4);
	
	university.displaydepartments();
	return 0;
}

