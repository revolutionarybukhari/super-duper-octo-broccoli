#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int *arraySquare(int *p,int size);
int main()
{
int *ptr = nullptr;
int size = 5;

int *p=arraySquare(ptr,size);
cout<<"Squared";
for(int i=0;i<size;i++)
{
cout<<p[i]<<endl;

}
return 0;
}

int *arraySquare(int *p,int size)
{
p=new int [size];
srand(time(NULL));
for(int i=0;i<size;i++)
	{
	 p[i]=1+rand()%10;
	 
	}
cout<<"initilized";
	for(int i=0;i<size;i++)
{

cout<<p[i]<<endl;

}
	
	
for(int i=0;i<size;i++)
	{
	 p[i]=(p[i])*(p[i]);
	 
	}
return p;
}
