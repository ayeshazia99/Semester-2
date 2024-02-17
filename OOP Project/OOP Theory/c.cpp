#include<iostream>
using namespace std;
class vector{
public:
int a;
int b;
	vector(){
	a=0;
	b=0;
	}
vector(int x,int y){
a=x;
b=y;
}
int showdata(){
cout<<"value of a is : "<<a<<endl;
cout<<"value of b is : "<<b;
}
vector operator *(vector obj){
vector temp;
temp.a=a*obj.a;
temp.b=b*obj.b;
return temp;
}
};
int main(){
vector obj1(3,4);
vector obj2(5,6);
vector obj3;
obj3=obj1*obj2;

obj3.showdata();
}


