#include<iostream>
#include<string>
using namespace std;

class Employee
{
string name;
int empID;

public:
Employee();
Employee(string,int);
void set_name(string);
void set_id(int);
string get_name();
int get_id();
void display();
};
Employee::Employee()
{
	name="";
	empID=0;
}
Employee::Employee(string s,int n)
{
	this->name=s;
	this->empID=n;
}
void Employee::set_name(string s)
{
	this->name=s;
}
void Employee::set_id(int n)
{
	this->empID=n;
}
string Employee::get_name()
{
	return name;
}
int Employee::get_id()
{
	return empID;
}
void Employee::display()
{
cout<<"Employee Name:"<<name<<endl;
cout<<"ID"<<empID<<endl;
}

class HourlyEmployee:public Employee
{
	double hours_worked;
	double hourly_income;
public:
HourlyEmployee();
HourlyEmployee(double,string,int);
void calculate_hourly_income();
};
HourlyEmployee::HourlyEmployee():Employee()
{
	hours_worked=0;
	hourly_income=150;
}
HourlyEmployee::HourlyEmployee(double time,string s,int a):Employee(s,a)
{
	this->hours_worked=time;
	hourly_income=150;
}
void HourlyEmployee::calculate_hourly_income()
{
	double total=hourly_income*hours_worked;
	cout<<"Hourly Employee\n";
	display();
	cout<<"Total Hourly income:"<<total;
	//return total;
}

class PermanentEmployee:public Employee
{
	double per_day_income;
	int total_working_days;
	int days_absent;
	int days_worked;
	float total_monthly_income;
	
public:
PermanentEmployee();
PermanentEmployee(int,int,string,int);
void calculate_the_monthly_income();

};
PermanentEmployee::PermanentEmployee():Employee()
{
	per_day_income=60000/22.00;
	total_working_days=0;
	days_absent=0;
	days_worked=0;
	total_monthly_income=0;
}
PermanentEmployee::PermanentEmployee(int td,int da,string s,int a):Employee(s,a)
{
	per_day_income=60000/22.00;
	total_working_days=td;
	days_absent=da;
	days_worked=total_working_days-days_absent;

}


void PermanentEmployee::calculate_the_monthly_income()
{
	total_monthly_income=days_worked*per_day_income;
	cout<<"Permanent Employee\n";
	display();
	cout<<"Total MOnthly income:"<<total_monthly_income;
	
}


int main()
{

HourlyEmployee obj1(10,"Husnain", 2222);
	obj1.calculate_hourly_income();

	cout<<endl;
	PermanentEmployee obj2(10,2,"Haider", 01342);
	obj2.calculate_the_monthly_income();

return 0;
}







