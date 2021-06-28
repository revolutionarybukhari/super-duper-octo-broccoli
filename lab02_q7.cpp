#include<iostream>
using namespace std;
void SumArrays(int **p,int a ,int b,int *sum);

int main()
{
int rows=5,cols=6;
int sum[5]={0};   
    int **ptr = new int*[rows];
	
	for (int i=0; i<rows; i++)
	{
		for (int j=0; j<cols; j++)
		{
		ptr[i]= new int[cols];}
	}
    //part a
    SumArrays(pArray,rows,cols,sum);
    
    for(int i=0;i<5;i++)
    {
     cout<<sum[i]<<" ";
    }

return 0;
}

void SumArrays(int **p,int a ,int b,int *sum)
{		


srand(time(NULL));
	
	for (int i=0; i<a; i++)
	{
		
		for (int j=0; j<b; j++)
		{
			p[i][j] =1+ rand () % 10;
			
		}

	}	
					
int calc=0;

//sum
for(int i=0;i<a;i++)
{
	for(int j=0;j<b;j++)
	{
	calc=calc+p[i][j];
	sum[i]=calc;
	
	}
	
}

}
