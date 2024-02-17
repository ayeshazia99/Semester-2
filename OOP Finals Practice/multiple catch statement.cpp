#include<iostream>
#include<exception>
using namespace std;
int func(int x,int y){
if(y>10){
throw y;
}
return x/y;
}
int main(){
int x,y,result;
cout<<"Enter x:";
cin>>x;
cout<<"Enter y:";
cin>>y;
try{
result=func(x,y);
cout<<"The result is:"<<result;
}
catch(char x){
cout<<"The denominator was:"<<x;
}
catch(...){
cout<<"The double catch";
}
}

