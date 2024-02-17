#include<iostream>
using namespace std;
class Employee{
public:
Employee(string name,string code){
cout<<"Name :" <<name;
cout<<"\n";
cout<<"Code :"<<code;
cout<<"\n";
}
};
class Consultant: virtual public Employee{
public:
Consultant(int yearsOfExperience,string name,string code):Employee(name,code){
cout<<"Years of Experience :"<<yearsOfExperience;
cout<<"\n";
}
};
class Manager:virtual public Employee{
public:
Manager(int noOfTeams,string name,string code):Employee(name,code){
cout<<"Number of Teams :"<<noOfTeams;
}
};
class ConsultantManager:public Consultant,public Manager{
public:
ConsultantManager(string name,string code,int noOfTeams,int yearsOfExperience):Employee(name,code),Manager(noOfTeams,name,code),Consultant(yearsOfExperience,name,code){
}
void display(){
}
};
int main(){
ConsultantManager obj("Ali","S-123",17,5);
obj.display();
return 0;

}
