#include<iostream>
using namespace std;

class Matrix
{
int rows ;
int columns;
int **matrix;
public:
Matrix (int r, int c);
void setRows(int );
int getRows()const;
void setCols(int);
int getCols()const;
//d++ ++d d-- --d
Matrix operator ++(int);//post
Matrix operator ++();//pre
Matrix operator --(int);//post
Matrix operator --();//pre
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

void Matrix::setRows(int r )
{
	this->rows=r;
}
int Matrix::getRows()const
{
	return rows;
}
void Matrix::setCols(int c)
{
	this->columns=c;
}
int Matrix::getCols()const
{
	return this->columns;
}
Matrix Matrix::operator ++(int)
{
Matrix temp(rows,columns);
//temp=*this;
for(int i=0;i<rows;i++)
	{
		for(int j=0;j<columns;j++)
		{
			temp.matrix[i][j]=matrix[i][j];		
		}

	}
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<columns;j++)
		{
			matrix[i][j]+=1;		
		}

	}
return temp;
}
Matrix Matrix::operator ++()
{
for(int i=0;i<rows;i++)
	{
		for(int j=0;j<columns;j++)
		{
			matrix[i][j]+=1;		
		}

	}	
return *this;
}
Matrix Matrix::operator --(int)
{
Matrix temp(rows,columns);
//temp=*this;
for(int i=0;i<rows;i++)
	{
		for(int j=0;j<columns;j++)
		{
			temp.matrix[i][j]=matrix[i][j];		
		}

	}
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<columns;j++)
		{
			matrix[i][j]-=1;		
		}

	}
return temp;

}
Matrix Matrix::operator --()
{
for(int i=0;i<rows;i++)
	{
		for(int j=0;j<columns;j++)
		{
			matrix[i][j]-=1;		
		}

	}	
return *this;

}

int main(){
int r1,c1,r2,c2;
cout<<"Please enter the rows:\n";
cin>>r1;
cout<<"Please enter the columns:\n";
cin>>c1;
Matrix mat1(r1,c1);
mat1.setval();
cout<<endl<<"d++ (val is updated in post)\n";
Matrix temp=mat1++;
temp.display();
cout<<"\nThe updated values are:\n";
mat1.display();
cout<<endl<<"++d\n";
++mat1;
mat1.display();

cout<<endl<<"d--(val updated in post)\n";
temp=mat1--;
temp.display();
cout<<"\nThe updated values are:\n";
mat1.display();
cout<<endl<<"--d\n";
--mat1;
mat1.display();

return 0;
}

