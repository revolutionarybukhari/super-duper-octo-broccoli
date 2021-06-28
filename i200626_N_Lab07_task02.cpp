#include<iostream>
using namespace std;

class Student
{
int n;
int scores[5];

public:

Student()
{
n=0;
scores[5]={0};
}

void setn(int num)
{
if(num>=1 && num<=100)
{
n=num;
}
else
{
int rn;
cout<<"Invalid range please renter"<<endl;
cin>>rn;
setn(rn);
}

}

int setscores(int score)
{
if(score>=0 && score<=50)
{

	return score;
}
else
{
	cout<<"Invalid score please re enter";
	int sc;
	cin>>sc;
	setscores(sc);
	return 0;
}

}

void input()
{
cout<<"Enter scores:";
int score1;


	for(int i=0;i<5;i++)
	{

	cin>>score1;
	score1=setscores(score1);
	scores[i]=score1;

	}

}

int TotalScore()
{
int sum=0;
	for(int j=0;j<5;j++)
	{
		sum=sum+scores[j];
		
	}

return sum;
}

};


int main()
{
int num;
int count=0;
cout<<"Please enter the number of students:";
cin>>num;

Student s[num];
for(int i=0;i<num;i++)
{
cout<<"Student "<<i+1;
s[i].setn(num);
s[i].input();
}

int sum[num];
for(int i=0;i<num;i++)
{
sum[i]=s[i].TotalScore();
//cout<<sum[i]<<endl;

}

for(int i=1;i<num;i++)
{
if(sum[0]<sum[i])
{
count++;
}

}

cout<<"Number of students scored high:"<<count;
return 0;
}
