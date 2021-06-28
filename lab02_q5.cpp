#include<iostream>
using namespace std;
int main()
{
int size,temp;
int *ptr;


cout<<"Enter the size of array:";
cin>>size;
int array[size];
cout<<"Enter the values";
for(int i=0;i<size;i++)
{
cin>>array[i];
}

//splitting array

int highest=array[1];
int second=array[0];
int location=0;
int z=0;
for(;z<size;z++)
{
	if(array[z]>highest)
	{
	 temp=highest;
	 highest=array[z];
	 second=temp;
	 location=z;
	}

	else if (array[z]>second && array[z]!=highest)
	{
	second=array[z];
	}
}

//splitting number
int remaining=highest-second;

ptr=new int [size+1];

for(int j=0;j<=size;j++)
{
	/*
	if(j<location)
	{
	*(ptr+j)=array[j];
	}
	if(j==location)
	{
	 *(ptr+j)=second;
	 *(ptr+j+1)=remaining;
	}
	if(j>location )
	{
	
	 *(ptr+j+1)=array[j];
	}
	*/
	if(j==0)
	{
	ptr[j]=array[j];
	}
	if(array[j]==highest)
         {
             ptr[j]=second;
             ptr[j+1]=remaining;
             
         }
         
         else
         {
             ptr[j+1]=array[j];
         }

}

//display

for(int i=0;i<(size+1);i++)
{
 cout<<ptr[i]<<" " ;
}


return 0;
}
