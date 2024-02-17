#include<iostream>
using namespace std;
template<class X> X func(X a,X b){
X sum;
sum=a+b;
return sum;
}
int main(){
cout<<func(20,10);
}
