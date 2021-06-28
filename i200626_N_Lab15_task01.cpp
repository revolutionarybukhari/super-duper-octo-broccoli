#include<iostream>
#include<fstream>
using namespace std;

int main()
{

int i=0;
string Full_name="",Program="",Reg_no="";
string contact="";
ofstream outfile;
outfile.open("Record.txt" , ios::app);
while(i<10)
{
cout<<"Please enter REG NO. , Full name , Program and the contact\n";
cin.ignore();
cin>>Reg_no>>Full_name>>Program>>contact;
outfile<<Reg_no<<" "<<Full_name<<" "<<Program<<" "<<contact<<endl;
i++;
}
outfile.close();

string output_text;
ifstream infile;
infile.open("Record.txt");
while(!infile.eof())
{
	 getline(infile,output_text );
	cout<<output_text<<endl;
}
infile.close();



return 0;
}
