#include<iostream>
using namespace std;

struct addition{
   int feet;
   float inch;

struct addition add(struct addition d1,struct addition d2)
{
//struct result;
struct addition result;
feet=d1.feet+d2.feet;
inch=d1.inch+d2.inch;

if(inch >= 12)
    {
        feet=feet +1;
        inch =inch-12;
    } 


result.feet=feet;
result.inch=inch;
return result ;
}

};


int main()
{
addition d1,d2,sum,result;
cout<<"Enter feet and inches of 1st distance:"<<endl;
cin>>d1.feet>>d1.inch;
cout<<"Enter feet and inches of 2nd distance:"<<endl;
cin>>d2.feet>>d2.inch;

sum.feet=d1.feet+d2.feet;
sum.inch=d1.inch+d2.inch;

addition res;
res=res.add(d1,d2);

cout<<"Total feet:"<<res.feet<<endl;
cout<<"Total inches"<<res.inch<<endl;



}
