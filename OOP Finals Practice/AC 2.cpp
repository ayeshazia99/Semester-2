#include<iostream>
using namespace std;
class store{
protected:
int total_bill;
public:
store(){
total_bill=2000;
}
virtual float total()=0;
};
class Imtiaz:public store{
float discout;
float final;
public:
float total(){
discout=0.7;
final=total_bill-(total_bill*0.7);
return final;
}
};
class Bin:public store{
float discout;
float final;
public:
float total(){
discout=0.5;
final=total_bill-(total_bill*0.5);
return final;
}
};
int main()
{
Imtiaz i;
Bin b;

int a;
cout<<b.total();
cout<<i.total();
}
