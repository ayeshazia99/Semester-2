#include<iostream>
using namespace std;
class base{
int length;
public:
int getx(){
return length;
}
virtual float getArea()=0;
};
class rectangle:public base{
int side1;
int side2;
public:
	float getArea(){
	cout<<"Enter first side of rectangle: ";
	cin>>side1;
	cout<<"Enter second side of rectangle : ";
	cin>>side2;	
	return side1*side2;
	}
};
class triangle:public base{
int base;
int height;
public:
	float getArea(){
	cout<<"Enter base of triangle : ";
	cin>>base;
	cout<<"Enter height of triangle : ";
	cin>>height;	
	return 0.5*base*height;
	}
};
int main(){
rectangle r;
triangle t;
cout<<"Area of rectangle is : "<<r.getArea();
cout<<"\n";
cout<<"Area of triangle is : "<<t.getArea();
}
