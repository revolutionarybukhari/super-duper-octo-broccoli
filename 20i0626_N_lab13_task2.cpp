#include<iostream>
using namespace std;

class BankAccount
{
protected:
int accountID ;
double balance;
public:
void balanceInquiry()
{
	cout<<"Account details:\n";
	cout<<"ID:"<<accountID<<endl;
	cout<<"Balance:"<<balance<<endl;
}

BankAccount()
{
	accountID=0;
	balance=0;
}
BankAccount(int a , double b)
{
accountID=a;
balance=b;
}
};

class CurrentAccount:public BankAccount
{
public:
CurrentAccount()
{
  balance = 0;
}
CurrentAccount(int id, double bal):BankAccount(id, bal) 
{

}

void amountWithdrawn(double amount)
{
	if (balance-amount >= 5000)
	{
		balance =balance-amount; 
		cout<<"\nWithdraw SuccessFul\n";
		balanceInquiry();
	}
	else
	{
			cout<<"\nCannot Withdraw, Balance is Below Rs. 5,000\n";
	}
	
}
};


class SavingsAccount: public BankAccount
{

public:
	SavingsAccount()
	 {
		 balance = 0;
	  }
	SavingsAccount(int id, double b):BankAccount(id,b) 
	{
	
	}

	void amountWithdrawn(double amount)
	{
		if (balance-amount >= 10000)
		{
			balance =balance - amount; 
			cout<<"\nWithdraw SuccessFul\n";
			balanceInquiry();
		}
		else
		{
			cout<<"\nCannot Withdraw, Balance is Below Rs. 10,000\n";
		}
	}
};

int main()
{
cout<<"Savings Account Check"<<endl;
	SavingsAccount SA1(9999, 10000);
	SA1.amountWithdrawn(4000);

	cout<<"Current Account Check"<<endl;
	CurrentAccount CA(2222, 20000);
	CA.amountWithdrawn(10000);
return 0;
}
