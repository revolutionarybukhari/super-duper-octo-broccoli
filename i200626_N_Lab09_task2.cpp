#include<iostream>
using namespace std;

class Operations
{
int oprand1;
int operand2;
public:
void getData();
void sum();
void product();

};

inline void Operations :: getData()
{
cout<<"Please enter oprand1 then oprand2:";
cin>>oprand1;
cin>>operand2;

}

inline void Operations :: sum()
{
cout<<"Addition of two numbers:"<<this->oprand1+this->operand2<<endl;

}

inline void Operations :: product()
{
cout<<"Product:"<<oprand1*operand2<<endl;
}

int main()
{
Operations op;

op.getData();
op.sum();
op.product();

}
