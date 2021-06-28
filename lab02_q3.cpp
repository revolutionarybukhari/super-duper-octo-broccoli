#include<iostream>
using namespace std;
bool compareStrings(char * , char *);
int main()
{
bool answer=false;

char cString01[] = {"Testing C-Style String"};
char cString02[] = {"Testing C-Style String"};

answer=compareStrings(cString01, cString02);
if(answer==true)
	{
	cout<<"true"<<endl;
	}
else
	{

	cout<<"false"<<endl;
	}
return 0;
}

bool compareStrings(char *a1 , char *a2)
{
int i=0;
bool flag=false;

for(int j=0;*(a1+j)!='\0' || *(a2+j)!='\0';j++)
{
	if(*(a1+j)==*(a2+j))
	{
	flag=true;
	continue;
	}
	else
	{
	flag=false;
	break;
	}

}

return flag;
}
