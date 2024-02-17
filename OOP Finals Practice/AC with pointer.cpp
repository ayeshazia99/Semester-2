#include<iostream>
using namespace std;
class bank{
public:
virtual float interest()=0;
};
class HMB:public bank{
float rate;
public:
float interest(){
rate=4;
cout<<"The interest rate is:"<<rate;
}
};
class HBL:public bank{
float rate;
public:
float interest(){
rate=2;
cout<<"The interest rate is:"<<rate;
}
};
class MCB:public bank{
float rate;
public:
float interest(){
rate=3;
cout<<"The interest rate is:"<<rate;
}
};
int main(){
bank *b;
b=new MCB;
b->interest();

}
