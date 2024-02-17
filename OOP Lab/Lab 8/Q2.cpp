#include<iostream>
using namespace std;
class cube{
public:
volume(){
int side,volume;
cout<<"Enter radius : ";
cin>>side;
volume=side*side*side;
return volume;
}
};
class cylinder{
public:
volume(){
int radius,height;
float volume;
cout<<"Enter radius : ";
cin>>radius;
cout<<"Enter height : ";
cin>>height;
volume=3.14*radius*radius*height;
return volume;
}
};
class box{
public:
volume(){
int length,breadth,height,volume;
cout<<"Enter length : ";
cin>>length;
cout<<"Enter breadth : ";
cin>>breadth;
cout<<"Enter height : ";
cin>>height;
volume=length*breadth*height;
return volume; 
}
};
int main(){
cube c1;
cylinder c2;
box b;
cout<<"Volume of cube is :"<<c1.volume()<<"cm^3"<<endl;
cout<<"Volume of cylinder is :"<<c2.volume()<<"cm^3"<<endl;
cout<<"Volume of box is :"<<b.volume()<<"cm^3";
}
