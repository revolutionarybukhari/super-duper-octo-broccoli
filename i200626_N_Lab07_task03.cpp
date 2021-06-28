#include<iostream>
#include<string>
using namespace std;

class Point
{
public:
int x;
int y;

Point()
{
x=0;
y=0;
}

Point(int x1 , int y1)
{
x=x1;
y=y1;

}

 Point(const Point &p1)
  {
  x = p1.x;
  y = p1.y; 
  }
 
 int getX()
  {
    return x;
  }
  void setX(int a)
  {
    x=a;
  }
  
 int getY()
  { 
   return y; 
  }
void setY(int b)
  { 
   y=b; 
  }

~ Point()
{

cout<<"Destructor Called"<<endl;
}
};


class Line
{
Point p1;
Point p2;

public:

Line()
{
}

Line(int x1, int y1, int x2, int y2)
{
p1.x=x1;
p1.y=y1;
p2.x=x2;
p2.y=y2;
}

Line(Point &p1, Point &p2)
  {
  this ->p1=p1;
  this ->p2=p2;
  }
 
 Line(Line &copy) // it’s a copy constructor 
 {
 p1=copy.p1;
 p2=copy.p2;
 
 }
 
 Point getP1()
  {
    return p1;
  }
  Point getP2()
  {
    return p2;
  }

double getSlope()
{
double result=((p2.y - p1.y)/(p2.x - p1.x ));
//cout<<result<<endl;
return result;
}

string toString()
{

string x1=to_string(p1.x);
string y1=to_string(p1.y);

string x2=to_string(p2.x);
string y2=to_string(p2.y);
string b1="[";
string b2="(";
string result=  b1+ b2+ x1+ "," +y1+ ")" + "," +"("+x2+","+y2+")"+"]";
return result;
}
};



int main()
{
double slope;
    //Point p1(5, 20); 
    Line l1(0,0,10,15);
    slope=l1.getSlope();
    cout<<"The slope of line is:"<<slope<<endl;
    cout<<"The line is:"<<l1.toString()<<endl;    
    return 0;
}
