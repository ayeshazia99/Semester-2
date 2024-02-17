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
vector operator ++(int obj){
vector temp;
temp.a=a++;
temp.b=b++;
return temp;
}
};
int main(){
vector obj(10,20);
obj++;
obj.showdata();
}


