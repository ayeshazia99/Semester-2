#include<iostream>
using namespace std;
class employee{
virtual float salary()=0;
};
class salaried:public employee{
int salary1;
public:
float salary(){
salary1=50000;
cout<<"Your salary is: "<<salary1;	
}
};
class hourly:public employee{
int hr_salary=500;
int hours,total;
int overtime=600;
public:
float salary(){
cout<<"Enter hours:";
cin>>hours;
if(hours>40){
total=(40*hr_salary)+((hours-40)*overtime);
}
else{
total=hours*hr_salary;
}
return total;
}
};
class commission:public employee{
int sales;
float salary1;
float percent=1.5;
public:
float salary(){
cout<<"Enter sales";
cin>>sales;
salary1=percent*sales;
return salary1;
}
};
class base:public employee{
int sales;
int base;
float salary1,percent=1.5;
public:
float salary(){
	base=50000;
cout<<"Enter sales";
cin>>sales;
salary1=(percent*sales)+((0.1*base)+base);
return salary1;
}
};
int main(){
salaried s;
hourly h;
commission c;
base b;
cout<<h.salary();
cout<<"\n";
cout<<s.salary();
cout<<"\n";
cout<<c.salary();
cout<<"\n";
cout<<b.salary();
}
