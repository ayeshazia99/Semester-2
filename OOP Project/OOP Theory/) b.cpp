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
vector operator +(int obj){
vector temp;
temp.a=a+obj;
temp.b=b+obj;
return temp;
}
};
int main(){
vector obj(3,4);
vector obj1(5,6);
vector obj2;
obj2=obj+20;

obj2.showdata();
}


