#include<iostream>
using namespace std;
class base{
protected:
int total_bill;
public:
base(int x){
total_bill=x;
}
virtual float finalbill()=0;
};
class ImtiazStore:public base{
public:
ImtiazStore(int a):base(total_bill){
total_bill=a;
}
float finalbill(){
return total_bill-0.07*total_bill;
}
};
class BinHashimStore:public base{
public:
BinHashimStore(int a):base(total_bill){
total_bill=a;
}
float finalbill(){
return total_bill-0.05*total_bill;
}
};
int main(){
int x,y;
cout<<"Enter total bill for Imtiaz Store : ";
cin>>x;
ImtiazStore i(x);
cout<<"Your final bill at Imtiaz Store after discout is : "<<i.finalbill();
cout<<"\n";

cout<<"Enter total bill for BinHashim Store : ";
cin>>y;
BinHashimStore b(y);
cout<<"Your final bill at BinHashim Store after discout is : "<<b.finalbill();
}
