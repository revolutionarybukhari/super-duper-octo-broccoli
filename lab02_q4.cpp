#include<iostream>
using namespace std;
int * reversearray(int *ptr);

int main()
{
int *p1;
int array[5]={1,2,3,4,5};
p1=reversearray(array);

for(int i=0;i<5;i++)
{

cout<<*(p1+i);
}

return 0;
}

int * reversearray(int *ptr)
{
int j=4;
int *p=new int [5];

for(int i=0;i<5;i++)
{
p[i]=*(ptr+j);
j--;
}
return p;
}
