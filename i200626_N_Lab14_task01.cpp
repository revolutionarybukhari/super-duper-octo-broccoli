#include<iostream>
#include<cmath>
using namespace std;
class shape
{

public:
virtual double isValid()=0 ;
virtual void print()=0 ;
virtual double getArea()=0 ;
virtual double getPerimeter()=0 ;
};



class square: public shape
{
double side;

public:
double isValid()
	{
		if (side > 0.0)
		{
			cout << "VALID" << endl;
		}
		while (side<0.0)
		{
			cout << "SIZE NOT VALID! Please enter:" << endl;
			cin >> side;
		}
	}
	square()
	{
		side = 0.0;
	}
	square(double SIDE)
	{
		side = SIDE;
		cout<<isValid();
	}
	void print()
	{
		cout << "SIDE:" << side <<"\n";
	}
	double getArea()
	{
		double area;
		area = side * side;
		return area ;
	}
	double getPerimeter()
	{
		double P;
		P = side * 4.0;
		return P ;
	}

};


class rectangle:public  shape
{
double length,width;
public:
double isValid()
	{
		if (length > 0.0 && width > 0.0)
		{
			cout << "VALID" << endl;
		}
		while(length < 0.0 && width < 0.0)
		{
			cout << "NOT CORRECT.ENTER AGAIN" << endl;
			cin >> length;
			cin >> width;
		}
	}
	rectangle()
	{
		length = 0.0;
		width = 0.0;
	}
	rectangle(double LEN, double WID)
	{
		length = LEN;
		width = WID;
		cout<<isValid();
	}
	void print()
	{
		cout << "LENGTH:" << length << endl;
		cout << "WIDTH:" << width << endl;
	}
	double getArea()
	{
	
	return length * width ;
	}
	double getPerimeter()
	{
		return (2 * (length + width));
	}



};

class triangle:public shape
{
double side1,side2,side3;
public:
	double isValid()
	{
		if ((side1 + side2) > side3 && (side1+side3)>side2 && (side2+side3)>side1)
		{
			cout << "VALID" << endl;
		}
		while ((side1 + side2) < side3 && (side1 + side3) < side2 && (side2 + side3) < side1)
		{
			cout << "INVALID.ENTER AGAIN:" << endl;
			cin >> side1;
			cin >> side2;
			cin >> side3;
		}
	}
	triangle()
	{
		side1 = 0;
		side2 = 0;
		side3 = 0;
	}
	triangle(double s1, double s2, double s3)
	{
		side1 = s1;
		side2 = s2;
		side3 = s3;
		cout<<isValid();
	}
	double getArea()
	{
		double s = (side1 + side2 + side3) / 2;
		return (sqrt(s * (s - side1) * (s - side2) * (s - side3))) ;
	}
	void print()
	{
		cout << "sides:" << side1 << " " << side2 << " " << side3 << endl;
	}
	double getPerimeter()
	{
		return (side1 + side2 + side3);
	}


};

class circle:public shape
{
double radius;
public:

double isValid()
	{
		if (radius > 0.0)
		{
			cout << "VALID" << endl;
		}
		while(radius<0)
		{
			cout << "INVALID.Write again:" << endl;
			cin >> radius;
		}
	}
	circle()
	{
		radius = 0.0;
	}
	circle(double r)
	{
		radius = r;
		cout<<isValid();
	}
	void print()
	{
		cout<<radius ;
	}
	double getArea()
	{
		return (3.14 * radius * radius) ;
	}
	double getPerimeter()
	{
		return (2 * 3.14 * radius) ;
	}


};

class eclipse:public shape
{
double radius1,radius2;
public:

double isValid()
	{
		if (radius1 > 0.0 && radius2 > 0.0)
		{
			cout << "The radius that are given are valid." << endl;
		}
		while (radius1 < 0.0 && radius2 < 0.0)
		{
			cout << "The radius that are given are not valid.Write again:" << endl;
			cin >> radius1;
			cin >> radius2;
		}
	}
	eclipse()
	{
		radius1 = 0.0;
		radius2 = 0.0;
	}
	eclipse(double r1, double r2)
	{
		radius1 = r1;
		radius2 = r2;
		cout<<isValid();
	}
	void print()
	{
		cout << "radius are: " << radius1 << " " << radius2 << endl;
	}
	double getArea()
	{
		return (3.14 * radius1 * radius2);
	}
	double getPerimeter()
	{
		return (3.14 * ((radius1 * radius1) + (radius2 * radius2)));
	}


};

int main()
{
cout<<"SQUARE\n";
	shape *s1;
	s1=new square(4.0);
	cout<<endl;
	cout<<s1->getArea()<<endl;
	cout<<s1->getPerimeter()<<endl;
	s1->print();
	delete s1;
cout<<endl;
cout<<"RECTANGLE\n";
	//shape *s2;
	s1=new rectangle(2,3);
	cout<<endl;
	cout<<s1->getArea()<<endl;
	cout<<s1->getPerimeter()<<endl;
	s1->print();
	delete s1;
cout<<endl;
cout<<"triangle\n";
	//shape *s1;
	s1=new triangle(2,2,2);
	cout<<endl;
	cout<<s1->getArea()<<endl;
	cout<<s1->getPerimeter()<<endl;
	s1->print();
	delete s1;
cout<<endl;
cout<<"circle\n";
	//shape *s4;
	s1=new circle(4.0);
	cout<<endl;
	cout<<s1->getArea()<<endl;
	cout<<s1->getPerimeter()<<endl;
	s1->print();
	delete s1;
cout<<endl;

cout<<"ellipse\n";
	//shape *s5;
	s1=new eclipse(4.0,3.0);
	cout<<endl;
	cout<<s1->getArea()<<endl;
	cout<<s1->getPerimeter()<<endl;
	s1->print();
	delete s1;

return 0;
}


