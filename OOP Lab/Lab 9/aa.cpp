#include<iostream>
using namespace std;
class shape{
float area;
public:
float Area(float x){

area=3.14*x*x;
return area;
}
shape operator +(shape obj){
shape temp;
temp.area=area+obj.area;
return temp;	
}
int showdata(){
cout<<"The total area of shape1 and shape2 is : "<<area;
}
};
int main(){
shape shape1;
int x,y;
cout<<"Enter radius of for shape 1 : ";
cin>>x;
shape1.Area(x);
shape shape2;
cout<<"Enter radius of for shape 2 : ";
cin>>y;
shape2.Area(y);
shape shape3;
shape3=shape1+shape2; 
shape3.showdata();
}
