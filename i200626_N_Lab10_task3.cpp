#include<iostream>
using namespace std;

class Matrix
{
int rows ;
int columns;
int **matrix;

public:

Matrix (int r, int c);
Matrix& operator=(const Matrix&);
bool operator==(const Matrix&);
Matrix operator*(int a);
Matrix operator/(int a);
Matrix operator*(Matrix m); 
Matrix operator/(Matrix m);
void setval();
void display(); 
};
void Matrix::display()
{
for(int i=0;i<rows;i++)
	{
		for(int j=0;j<columns;j++)
		{
			cout<<this->matrix[i][j]<<" ";		
		}
		cout<<endl;
	}
	cout<<endl<<endl;
}
void Matrix::setval()
{
for(int i=0;i<rows;i++)
	{
		for(int j=0;j<columns;j++)
		{
			cout<<"Eter value of element "<<i<<j<<endl;
			cin>>this->matrix[i][j];		
		}
	}
}
Matrix::Matrix (int r, int c)
{
	this->rows=r;
	this->columns=c;
	this->matrix=new int *[r];
	for(int i=0;i<r;i++)
	{
		matrix[i]=new int [c];
	}
	
}

Matrix& Matrix::operator=(const Matrix& a)
{
	this->rows=a.rows;
	this->columns=a.columns;
	this->matrix=new int *[rows];
	for(int i=0;i<rows;i++)
	{
		matrix[i]=new int [columns];
	}
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<columns;j++)
		{
			this->matrix[i][j]=a.matrix[i][j];		
		}
	}
	return *this;
}

bool Matrix::operator==(const Matrix& m)
{
bool flag;
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<columns;j++)
		{
			if(matrix[i][j]==m.matrix[i][j])
			{
				flag=true;			
			}
			else
			{
				flag=false;
				break;
			}		
		}
		if(flag==false)
		{
			break;
		}
	}
	return flag;
}
Matrix Matrix::operator*(int a)
{
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<columns;j++)
		{
			this->matrix[i][j]*=a;		
		}
	}
	return *this;
}
Matrix Matrix::operator/(int a)
{
if(a!=0)
{
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<columns;j++)
		{
			this->matrix[i][j]/=a;		
		}
	}
}
else
{
	cout<<"Invalid number!\n";
}
	return *this;
}
Matrix Matrix::operator*(Matrix m)
{

Matrix temp(this->rows,m.columns);
	if(this->columns==m.rows)
	{
		
		for(int i=0;i<rows;i++)
		{
			for(int j=0;j<m.columns;j++)
			{
				for(int k=0;k<this->columns;k++)
				{
					temp.matrix[i][j]+=this->matrix[i][k]*m.matrix[k][j];
				}
			}
		}
	/*this->columns=m.columns;
		this->matrix=new int *[rows];
		for(int i=0;i<rows;i++)
		{
			matrix[i]=new int [columns];
		}
		for(int i=0;i<rows;i++)
		{
			for(int j=0;j<columns;j++)
			{
				this->matrix[i][j]=temp.matrix[i][j];		
			}
		}*/
		return temp;
	}
	else
	{
		cout<<"Matrix Multiplication is not possible\n";
	}
	return temp;
}
Matrix Matrix::operator/(Matrix m)
{
Matrix temp(rows,columns);
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<columns;j++)
		{
			temp.matrix[i][j]=this->matrix[i][j]/m.matrix[i][j];		
		}
	}
	return temp;
}


int main()
{
int r1,c1,r2,c2;
cout<<"Please enter the rows:\n";
cin>>r1;
cout<<"Please enter the columns:\n";
cin>>c1;
Matrix mat1(r1,c1);
mat1.setval();
cout<<"Please enter the rows:\n";
cin>>r2;
cout<<"Please enter the columns:\n";
cin>>c2;
Matrix mat2(r2,c2);
mat2.setval();
cout<<"Making a martix copy of first matrix\n";
Matrix mat3=mat1;

cout<<"Checking that is m3==m1\n";
bool check;
check=mat3.operator==(mat1);
cout<<check;
int number;
cout<<"\nMultiplying matrix 1 by a num. ENter a number:\n";
cin>>number;
Matrix m4=mat1*number;
cout<<"\n Result \n";
m4.display();
cout<<"\ndividing matrix 1 by a num. ENter a number:\n";
cin>>number;
Matrix m5=mat1/number;
cout<<"\n Result \n";
m5.display();

cout<<"\n Multiplying matrix 1 and 2 \n";
Matrix m6=mat1*mat2;
m6.display();

cout<<"\n Dividing above matric by matrix 1 (it is also updated to above shown matrix)\n";
cout<<"\nMATRIX 1:\n";m6.display();
cout<<"\nMatrix 2:";mat1.display();cout<<endl;
Matrix m7=m6/mat1;
m7.display();
return 0;
}
