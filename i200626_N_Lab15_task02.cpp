#include<iostream>
#include<cmath>
using namespace std;
template <class T>
T power (T a, int b) {
  T result;
  result = pow(a,b);
  return (result);
}

template <class T>
T square_root (T a) {
  T result;
  result = sqrt(a);
  return (result);
}

template <class T>
T sine1 (T a) {
  T result;
  result = sin(a);
  return (result);
}

template <class T>
T cos1 (T a) {
  T result;
  result = cos(a);
  return (result);
}

template <class T>
T tan1 (T a) {
  T result;
  result = tan(a);
  return (result);
}
// + * /

template <class T>
class calculator{
T a;
T b;
public:
calculator(T aa ,T bb)
{
	a=aa;
	b=bb;
}


T add();
T multi();
T div();
};
template <class T>
T calculator<T>::add ()
{
  T retval;
  retval = a+b;
  return retval;
}
template <class T>
T calculator<T>::multi ()
{
  T retval;
  retval = a*b;
  return retval;
}
template <class T>
T calculator<T>::div ()
{
  T retval;
  retval = a/b;
  return retval;
}

int main () {


cout<<"*******************TEMPLATES******************\n";
cout<<"QUESTION 1\n";
  cout<<"Power 2^6:"<<power(2,6)<<endl;
  cout<<"Sqaure Root sqrt(81.0):"<<square_root(81.0)<<endl;
  cout<<"Sin(46.5):"<<sine1(46.5)<<endl;
  cout<<"cos(20.6):"<<cos1(20.6)<<endl;
  cout<<"tan(45):"<<tan1(45)<<endl;  
  
  cout<<"QUESTION 2\n";
	calculator <float>c1(10,20);
	cout<<"a=10 , b=20 \n a+b :"<<c1.add()<<"\n a*b:"<<c1.multi()<<"\n a/b:"<<c1.div()<<endl;  
  return 0;
}




