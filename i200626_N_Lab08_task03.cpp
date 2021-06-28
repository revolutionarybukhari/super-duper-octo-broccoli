#include<iostream>
#include<string>
using namespace std;

class Date
{
int year;
int month;
int day;

public:
Date(int year, int month, int day);
void add(int days);
void add(int month , int days);
void add(Date & other);
void addWeeks(int weeks);
int daysTo(Date & other);
void subtract(int days);
void subtract(int month , int days);
void subtract (Date & other);
int getDay();
int getMonth();
int getYear();
bool isLeapYear();
string toString();

};

Date::Date(int year, int month, int day)
{
this->year=year;
this->month=month;
this->day=day;
}

void Date::add(int days)
{
this->day+=days;

if(day>30)
{
	this->month+=1;
	
	this->day=day-30;
	if(this->day>30)
	{
		Date::add(day);

	}
	else
	{
	return;
	}

}
else
{
return;
}
}


void Date::add(int month , int days)
{
Date::add(days);
this->month+=month;
if(this->month>12)
{
this->year+=1;
this->month=this->month-12;
	if(this->month>=12)
	{
	
	Date::add(this->month , 0);
	 return;
	}
	else
	{
	return;
	}
}

}
void Date::add(Date & other)
{
this->year+=other.year;
//this->month+=other.month;
//this->day+=other.day;
Date::add(other.month,other.day);
}

void Date::addWeeks(int weeks)
{

Date::add((7*weeks));

}

int Date::daysTo(Date & other)
{
int diffyear,diffmonth,diffday;
diffyear=other.year-this->year;
diffyear=diffyear*365;
diffmonth=other.month-this->month;
diffmonth=diffmonth*30;
diffday=other.day-this->day;
return diffday+diffmonth+diffyear;
}

void Date::subtract(int days)
{
	if(days>30 &&this->day<30)
	{
		if(month>0)
		{
		 this->month--;
		 day=day-30;
		 
		 if(days>30)
		 {
		   Date::subtract(days);
		   return;
		 }
		 }
	 }
	 if((days)>=0 || days<=30)
	 {
	  this->day=day-days;
	  if(day<0)
	  {
	  	this->month--;
	  	this->day+=30;
	  }
	 }
	
}
void Date::subtract(int month , int days)
{

subtract(days);
//months
	if(month>12 && this->month<12)
	{
	 
	 this->year--;
	 month-=12;
	 if(month>12)
	 {
	  Date::subtract(month ,0);
	   return;
	 }
	 else
	 {
	 this->month-=month;	
	 }
	 }
	 if(month>=0 && month<=12)
	 {
	 
	  this->month=this->month-month;
	  if(this->month<0)
	  {
	  	this->year--;
	  	this->month+=12;
	  }
	 }
	
}

void Date::subtract (Date & other)
{
this->year-=other.year;
Date::subtract(other.month , other.day);

}
int Date::getDay()
{
return day;
}
int Date::getMonth()
{
return month;
}
int Date::getYear()
{
return year;
}
bool Date::isLeapYear()
{
	if((year%100)==0 && (year%400)==0)
	{
		return true;
	}
	else
	{
	 return false;
	}
}
string Date::toString()
{
string y=to_string(this->year);
string m=to_string(this->month);
string d=to_string(this->day);
string slash="/";
return y+slash+m+slash+d;
}

int main()
{
Date d(2002,5,25);
Date d2(2020,5,25);
cout<<"days to"<<endl;
cout<<d.daysTo(d2)<<endl;
cout<<d.toString()<<endl;
d.add(15);
cout<<d.toString()<<endl;
d.add(5 , 0);
cout<<d.toString()<<endl;
d.add(d2);
cout<<d.toString()<<endl;
d.addWeeks(3);
cout<<d.toString()<<endl;


d.subtract(2);
cout<<d.toString()<<endl;
d.subtract(2 , 1);
cout<<d.toString()<<endl;

d.subtract(d2);
cout<<d.toString()<<endl; 

cout<<d.isLeapYear()<<endl;
cout<<d.toString()<<endl;

return 0;
}
