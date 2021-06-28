#include<iostream>
using namespace std;


int powWithRecursion(int base, int pow)
{

if(pow<=1)
{
return base;
}

else
{
   
   return base*powWithRecursion(base, pow-1);
}

    return powWithRecursion(base, pow);
}


int main()
{
int base ,pow;
cout<<"Enter base:";
cin>>base;
cout<<"Enter pow:";
cin>>pow;
        cout<<powWithRecursion(base,pow);

return 0;
}

