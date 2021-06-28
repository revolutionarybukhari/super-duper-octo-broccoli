#include<iostream>
using namespace std;

int CountOnes(int n);
int main()
{
int decimal;

cout<<"PLease enter a decimal number:";
cin>>decimal;

cout<<CountOnes(decimal);


return 0;
}



int CountOnes(int n)
{

if(n/2==1)
{
return 1*10;
}

else
{
	
	return ((n%2)) + CountOnes(n/2)*10;

}

return CountOnes(n);
}
