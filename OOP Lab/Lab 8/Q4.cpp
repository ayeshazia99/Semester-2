#include<iostream>
using namespace std;
class multiply{
public:
float  multiplication(){
int x,y; 
cout<<"Enter integer 1 :";
cin>>x;
cout<<"Enter integer 2 :";
cin>>y;
return x*y;
}
};
class multiply1{
public:
float multiplication(){
int x,y,z; 
cout<<"Enter integer 1 :";
cin>>x;
cout<<"Enter integer 2 :";
cin>>y;
cout<<"Enter integer 3 :";
cin>>z;
return x*y*z;
}
};
class multiply2{
public:
float multiplication(){
float x,y;
cout<<"Enter first decimal value :";
cin>>x;
cout<<"Enter second decimal value :";
cin>>y;
return x*y;
}
};
class multiply3{
public:
float multiplication(){
float x,y,z;
cout<<"Enter first decimal value :";
cin>>x;
cout<<"Enter second decimal value :";
cin>>y;
cout<<"Enter third decimal value :";
cin>>z;
return x*y*z;
}
};
int main(){
multiply m;
multiply1 m1;
multiply2 m2;
multiply3 m3;
cout<<"Answer : "<<m.multiplication()<<endl;
cout<<"Answer : "<<m1.multiplication()<<endl;
cout<<"Answer : "<<m2.multiplication()<<endl;
cout<<"Answer : "<<m3.multiplication();
}
