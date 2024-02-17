#include<iostream>
#include<cmath>
using namespace std;
class person{
    protected:
    string name;
    double age;
    double salary;
    public:
    person(){
        cout<<endl<<"enter the name of person";
        cin>>name;
        cout<<endl<<"enter the age of person";
        cin>>age;
        cout<<endl<<"please enter the salary of the person";
        cin>>salary;
        
    }
     void get_data(string n, double a,double s){
        age=a;
        name=n;
        salary=s;
    }
     void display(){
        cout<<endl<<name<<endl<<age;
        }
        virtual void set_bonus()=0;

};
class admin:public person{
    double bonus;
    public:
    admin(){

    }
    void get_data(string name,double age, double salary){
        this->name=name;
        this->age=age;
        this->salary=salary;
    }
    void display(){
        cout<<endl<<name;
        cout<<endl<<age;
        cout<<endl<<salary;

    }
    void set_bonus(){
        bonus=salary*0.15;
        cout<<"\n bonus = "<<bonus;

     }
};
class account:public person{
	double bonus;
	public:
		account(){
			
		}
	    void get_data(string name,int age, double salary){
				this->age=age;
				this->name=name;
				this->salary=salary;
			}
	    void display(){
				cout<<endl<<"name:"<<name<<" age:"<<age<<" salary:"<<salary<<" bonus:"<<bonus<<endl;
			}
	 	void set_bonus(){
	 		bonus=salary*0.05;
	 		cout<<"\nbonus:"<<bonus;
		 }
};
int main(){
    person *ob;
    admin a;
    ob=&a;
    ob->set_bonus();
    ob->display();
    person *ob1;
    ob1=new account;
    ob1->set_bonus();
    ob1->display();

}
