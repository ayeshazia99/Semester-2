#include<iostream>
using namespace std;
class object{
int x;
int *y;
public:
object(int a,int b){
x=a;
y=new int;
*y=b;
}
object(const object &ob){
x=ob.x;
y=new int;
*y=*ob.y;
}
void showdata(){
cout<<"Value of x is:"<<x;
cout<<"Value of y is:"<<*y;
}
int setdata(int e,int f){
x=e;
*y=f;
}
~object(){
delete y;
}
};
int main(){
object ob(3,4);
object o2=ob;
ob.showdata();
o2.showdata();
o2.setdata(5,6);
o2.showdata();
}
