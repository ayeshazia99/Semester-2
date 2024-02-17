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
bool operator <(vector obj){
if(a<obj.a && b<obj.b){
return true;
}
else
return false;

}
};
int main(){
vector obj1(3,4);
vector obj2(5,6);
if(obj1<obj2){
	cout<<"Object 1 is less than Object 2";}
	else
	cout<<"Object 1 is greater than Object 2";
}




