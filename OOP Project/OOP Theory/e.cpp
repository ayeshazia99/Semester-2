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
bool operator ==(vector obj){
if(a==obj.a && b==obj.b){
return true;
}
else
return false;

}
};
int main(){
vector obj1(5,5);
vector obj2(5,5);
if(obj1==obj2){
	cout<<"Object 1 is equal to Object 2";}
	else
	cout<<"Object 1 is not equal to Object 2";
}




