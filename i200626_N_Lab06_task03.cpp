#include<iostream>
using namespace std;

struct TIME
{
  int hours;
int minutes;
int seconds;


int settime(int h)
{
	if(h<0 ||h>=60)
	{
		cout<<"invalid time";
	exit(2);
	return 2;
	}
	else
	{
		return h;
	}
}



struct TIME differenceBetweenTimePeriod(struct TIME start,struct  TIME stop)
{
struct TIME result;
int hour , min ,sec;

if(stop.seconds>start.seconds)
{
start.minutes=start.minutes-1;
start.seconds=start.seconds+60;
}

 sec=start.seconds-stop.seconds;


if(stop.minutes>start.minutes)
{
start.hours=start.hours-1;
start.minutes=start.minutes+60;
}

 min=start.minutes-stop.minutes;

if(stop.hours>start.hours)
{
 hour=stop.hours-start.hours;
}
else
{
 hour=start.hours-stop.hours;
 }

result.seconds=sec;
result.minutes=min;
result.hours=hour;


 return result;
}

 };




int main()
{
TIME start,end,diff;
int hour1,min1,sec1,hour2,min2,sec2;
cout<<"Enter starting time in hours , minutes and seconds respectively:";
cin>>start.hours;
cin>>start.minutes;
start.minutes=start.settime(start.minutes);
cin>>start.seconds;
start.seconds=start.settime(start.seconds);

cout<<endl;

cout<<"Enter ending time in hours , minutes and seconds respectively:";
cin>>end.hours;
cin>>end.minutes;
end.minutes=start.settime(end.minutes);
cin>>end.seconds;
end.seconds=end.settime(end.seconds);

cout<<endl;
struct TIME res;
res=res.differenceBetweenTimePeriod(start,end);

cout<<"The time difference is:"<<endl;
cout<<"HOurs:"<<res.hours<<endl;
cout<<"Minutes"<<res.minutes<<endl;
cout<<"Seconds"<<res.seconds<<endl;
return 0;
}

