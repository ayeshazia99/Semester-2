#include<iostream>
using namespace std;
class base{
int a;
public:
virtual void func()=0;
int getvalue(){
return a;
}
};
class hmb:public base{
int b;
public:
	void func(){
	cout<<"The interest rate of HMB is 4%\n";
	}
};
class hbl:public base{
int b;
public:
	void func(){
	cout<<"The interest rate of HBL is 2%\n";
	}
};
class mcb:public base{
int b;
public:
	void func(){
	cout<<"The interest rate of MCB is 3%";
	}
};
int main(){
hmb a;
hbl b;
mcb c;
a.func();
b.func();
c.func();
}
