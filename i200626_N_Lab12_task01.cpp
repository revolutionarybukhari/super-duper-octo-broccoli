#include<iostream>
#include<string>
using namespace std;

class Processor
{
	string processName;
	float price;
public:
Processor(string name,float p);
void setname(string);
void setprice(float);
string getname();
float getprice();

};

void Processor::setname(string a)
{
	this->processName=a;
}
void Processor::setprice(float f)
{
	this->price=f;
}
string Processor::getname()
{
	return processName;
}
float Processor::getprice()
{
	return price;
}
Processor::Processor(string name,float p)
{
this->processName=name;
this->price=p;
}

class MainMemory
{
int size;
float price;
public:
MainMemory(int,float);
void setsize(int);
void setprice(float);
int getsize();
float getprice();

};
void MainMemory::setsize(int a)
{
	size=a;
}
void MainMemory::setprice(float a)
{
	price=a;
}
int MainMemory::getsize()
{
	return size;
}
float MainMemory::getprice()
{
	return price;
}

MainMemory::MainMemory(int s,float p)
{
	size=s;
	price=p;
}

class MotherBoard
{
string compName;
public:
MotherBoard();
void setname(string);
string getname();

};
MotherBoard::MotherBoard()
{
compName="intel";
}

void MotherBoard::setname(string a)
{
	compName=a;
}
string MotherBoard::getname()
{
	return compName;
}


class Computer
{
Processor &proc;//aggerigation
MainMemory &ram;//aggerigation
MotherBoard mboard;//composition
public:


Computer(Processor &,MainMemory &);
void display();
};
Computer::Computer(Processor &p,MainMemory &m):proc(p),ram(m)
{
	
	MotherBoard mom;
	mboard = mom;	
	
}
void Computer::display()
	{	
		cout<<"\nCoumputer specifications:\n";
		cout<<"Processor Name: "<<proc.getname()<<endl;
		cout<<"Processor Price : "<<proc.getprice()<<endl;
		cout<<"Main Memory Size : "<<ram.getsize()<<endl;
		cout<<"Main Memory Price : "<<ram.getprice()<<endl;
		cout<<"MotherBoard Name: "<<mboard.getname()<<endl;

	}

int main()
{
	Processor processor("I10", 1000.45);
	MainMemory mainmemo(64, 150.89);
	Computer comp(processor,mainmemo);
	comp.display();

return 0;
}

