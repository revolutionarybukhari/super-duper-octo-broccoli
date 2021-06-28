#include<iostream>
using namespace std;

class Account
{
long accountNumber ;
double balance;
static int base;
public:
Account() ;// Default Constructor
Account(double bal); // Parameterized Constructor
void checkBalance () const; // Accessor
void deposit (double amount); // Mutator
void withdraw (double amount); // Mutator
~Account()
{
cout<<"Account is closed!"<<endl;
cout<<"Account Number:"<<accountNumber<<endl;
cout<<"Balance:"<<balance<<endl;
cout<<"Amount is transfered to the authorized person"<<endl;
}
};

int Account::base=0;
Account::Account()
{
	base++;
	this ->balance=0;
	this ->accountNumber=100000+base;

}

Account::Account(double bal) // Parameterized Constructor
{
if(bal<0)
{
	cout<<"Negative amount added";
	exit(0);

}
else
{	
	this -> balance+=bal;
	base++;
	this ->accountNumber=100000+base;

}

}
void Account::checkBalance ()const  // Accessor
{
cout<<"Account Number:"<<accountNumber<<endl;
cout<<"Balance:"<<balance<<endl;

}
void Account::deposit (double amount) // Mutator
{
if(amount<0.0)
{
	
	 cout<<"Please enter amount more than 0"<<endl;
	 cin>>amount;
	Account::deposit (amount);
	return;
	
}
else
{
	balance+=amount;
	return ;
}
}

void Account::withdraw (double amount)// Mutator
{
if(amount<0.0)
{
	
	 cout<<"Please enter amount more than 0"<<endl;
	 cin>>amount;
	withdraw (amount);
	Account::withdraw (amount);
	return;
		
}
else
{
	balance-=amount;
	return ;
}

}

int main()
{
int option;
double balance,deposite=0.0,withdraw=0.0;
Account a;//default
cout<<"Welcome"<<endl;
//cout<<"Press the following button:"<<endl<<"0.Exit"<<endl<<"1.Make an account"<<endl<<"2.Deposite amount"<<endl<<"3.Withdraw amount"<<endl<<"4.check balance"<<endl;
//cin>>option;
cout<<"Default constructor"<<endl;
cout<<"Enter deposite amount:";
cin>>deposite;
a.deposit(deposite);
cout<<endl;
cout<<"Enter amount to withdraw:";
cin>>withdraw;
a.withdraw(withdraw);
cout<<endl;
cout<<"BAlance check"<<endl;	
a.checkBalance();
cout<<endl<<endl;		
cout<<"Parameterize constructor"<<endl;
cout<<"Enter balance greater than 0.0:";
cin>>balance;
Account b(balance);
cout<<"Enter deposite amount:";
cin>>deposite;
b.deposit(deposite);
cout<<endl;
cout<<"Enter amount to withdraw:";
cin>>withdraw;
b.withdraw(withdraw);
cout<<endl;
cout<<"BAlance check"<<endl;
b.checkBalance();	
cout<<endl<<endl;		
		
			
return 0;
}
