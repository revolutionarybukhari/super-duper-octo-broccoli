#include<iostream>
using namespace std;

struct Marks
{
int rollno;
char name[20];
float chem_marks ,math_marks ,phy_marks;



};

int check(int i)
{

int answer;
if(i>=0 && i<=100)
{
return i;
}
else
{

//do{
cout<<"invalid number enter again:"<<endl;

cin>>answer;
check(answer);

//}

//while(answer<0 && answer>100);

//return answer;
}

}


int main()
{
Marks student[5];
for(int i=0;i<5;i++)
{
cout<<"Enter data of student no "<<i+1<<endl;
cout<<"Rollnumber:";
cin>>student[i].rollno;
cout<<"Name:";
cin>>student[i].name;
cout<<"Chemistry marks:";
cin>>student[i].chem_marks;
student[i].chem_marks=check(student[i].chem_marks);
cout<<"Math MArks:";
cin>>student[i].math_marks;
student[i].math_marks=check(student[i].math_marks);
cout<<"Physics MArks:";
cin>>student[i].phy_marks;
student[i].phy_marks=check(student[i].phy_marks);
}


cout<<endl<<endl;
for(int i=0;i<5;i++)
{
cout<<"Percentage of student "<<i+1<<"= ";

cout<<((student[i].chem_marks+student[i].math_marks+student[i].phy_marks)/300.0)*100<<endl;

}




return 0;
}
