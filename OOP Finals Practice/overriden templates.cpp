#include<iostream>
using namespace std;
template<class X>int func(int a){
cout<<"This will not run";
}
int func(int a){
cout<<"This will run";
}
int main(){
func(20);
}
