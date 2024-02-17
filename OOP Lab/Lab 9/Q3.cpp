#include<iostream>
using namespace std;
class perimeter{
private:
int length;
int breadth;
friend class printClass;
int perimeter1(){
int x,y;
cout<<"Enter length : ";
cin>>x;
cout<<"Enter breadth : ";
cin>>y;
length=x;
breadth=y;
int perimeters;
perimeters=2*length+2*breadth;
return perimeters;
}
};
class printClass{
perimeter p;
public:
int showdata(){
cout<<"The perimeter is : "<<p.perimeter1();
}};
int main(){
printClass peri;
peri.showdata();
}
