#include<iostream>
using namespace std;
class A{
public:
static int a;
int b;
A(int x,int y){
a=x;
b=y;
}
};int A::a;
int main(){
A a(10,20);
cout<<"this"<<a.a;
cout<<"that"<<b.a;
}
