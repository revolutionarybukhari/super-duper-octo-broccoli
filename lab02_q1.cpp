/*#include<iostream>
using namespace std;
void findSmallestLargest(int *a);
int main()
{
int array[5]={2,9,1,5,8};
findSmallestLargest(array);
cout<<array[0]<<endl;
cout<<array[4]<<endl;
return 0;
}
*/
void findSmallestLargest(int *a)
{
int temp , num1,num2;
int b=0,i=4;

for(int b=0;b<5;b++)
{
	if(*(a+b)<*(a+0))
	{//lowest
	temp=*(a+b);
	*(a+b)=*(a+0);
	*(a+0)=temp;
	
	}
	if(*(a+i)<*(a+b))
	{
	temp=*(a+b);
	*(a+b)=*(a+i);
	*(a+i)=temp;
	

	}
	
}
}
