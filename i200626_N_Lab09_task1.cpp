#include<iostream>
using namespace std;

class Money
{
int dollars;
int cents;

public:
Money()
{
this->dollars=0;
this->cents=0;
}

Money(int dollar, int cents) // Parameterized Constructor
{
this->dollars=dollar;
this->cents=cents;
}

Money& operator= (const Money& right)
{
this->dollars=right.dollars;
this->cents=right.cents;
return *this;
}

bool operator== (const Money& right)
{
if(this->dollars==right.dollars)
{
	if(this->cents==right.cents)
	{
		return true;
	}
	else
	{
		return false;
	}
}
else
{
	return false;
}
}

Money& operator+= (const Money& right)
{
int amount;
this->dollars+=right.dollars;
this->cents+=right.cents;
if(this->cents>=100)
{
	amount=this->cents/100;
	this->dollars+=amount;
	this->cents-=(amount*100);
}
else
{
	return *this;	
}
return *this;
}

Money& operator-= (const Money& right)
{
this->cents-=right.cents;
this->dollars-=right.dollars;
if(this->cents<0)
{
this->cents+=100;
this->dollars-=1;
}
return *this;
}

Money& operator*= (int number)
{
int amount;
Money temp;
temp.dollars=this->dollars*number;
temp.cents=this->cents*number;
if(temp.cents>=100)
{
	amount=temp.cents/100;
	temp.dollars+=amount;
	temp.cents-=(amount*100);
}
this->dollars=temp.dollars;
this->cents=temp.cents;

return *this;
}

Money& operator/= (int number)
{
double cent;
cent=this->dollars%number;
cent=(cent*100)/2;
this->dollars=this->dollars/number;
this->cents=this->cents/number+cent;
return *this;
}

~Money()
{

}
void display()
{
cout<<"Dollar:"<<this->dollars<<" "<<"Cents:"<<this->cents<<endl;
}

};


int main()
{
bool flag;
Money m;
Money money(4,30);
Money m3;
Money m4;

m. operator= (money);
m.display();

flag= m.operator==(money);
cout<<flag<<endl;

m.operator +=(money);
m.display();

 m.operator -=(money);
m.display();

m.operator *= (2);
m.display();

m.operator /=(2);
m.display();
}
