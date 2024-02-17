#include<iostream>
#include<string.h>
using namespace std;
class Person{
public:
int EmployeeID;
int getData(){
cout<<"Enter your Employee ID : ";
cin>>EmployeeID;
}
int displayData(){
return EmployeeID;
}
};
class Admin:public Person{
public:
string name; 
int getData(){
cout<<"Enter your name :";
cin>>name;
}
string displayData(){
return name;
}
};
class Accounts:public  Person{
public:
int income;
int getData(){
cout<<"Enter your monthly income : ";
cin>>income;
}
float bonus(){
float rate=0.05;
float bonus;
bonus=rate*income;
return bonus;
}
int displayData(){
return income;
}
};
int main(){
Person p;
Admin ad;
Accounts ac;
p.getData();
ad.getData();
ac.getData();
cout<<"Employee ID : "<<p.displayData()<<endl;
cout<<"Employee Name : "<<ad.displayData()<<endl;
cout<<"Employee Monthly Income : "<<ac.displayData()<<endl;
cout<<"Annual Bonus : "<<ac.bonus();
}
