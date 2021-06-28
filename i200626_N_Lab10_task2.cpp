#include<iostream>
using namespace std;

class Increment
{
double real;
double imaginary;

public:

Increment();
void setReal(double );
double getReal()const;
void setImaginary(double);
double getImaginary()const;
bool operator!()const;
};

Increment::Increment()
{
real=0.0;
imaginary=0.0;
}

void Increment::setReal(double r)
{
	this->real=r;
}
double Increment::getReal()const
{
	return this->real;
}
void Increment::setImaginary(double i)
{
	this->imaginary=i;
}

double Increment::getImaginary()const
{
	return this->imaginary;
}
bool Increment::operator!()const
{
bool flag;
	if(this->real==0.0 && this->imaginary==0.0)
	{
		flag=true;
	}
	else
	{
		flag=false;
	}
return flag;
}

int main()
{
Increment num1;
double r,i;
cout<<"Please enter real part of the complex number:\n";
cin>>r;
cout<<"Please enter imaginary part of the complex number:\n";
cin>>i;
num1.setReal(r);
num1.setImaginary(i);
cout<<"You have set real as :"<<num1.getReal()<<" Imaginary as :"<<num1.getImaginary()<<endl;
cout<<"Lets check the function overloaded!! are they equal to 0\n";
if(num1.operator!())
{
cout<<"true\n";
}
else
{
cout<<"false\n";
}


 
return 0;
}
