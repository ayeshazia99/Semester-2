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
vector operator *(vector obj){
vector temp;
temp.a=a*obj.a;
temp.b=b*obj.b;
return temp;
}
vector operator /(vector obj){
vector temp;
temp.a=a/obj.a;
temp.b=b/obj.b;
return temp;
}
bool operator >(vector obj){
if(a>obj.a && b>obj.b){
return true;
}
else
return false;

}
};
int main(){
vector obj1(4,5);
vector obj2(6,7);
vector obj3(8,9);
if (( obj1*obj2) > (obj2/obj3))
{	
cout<<"The arithmetic statement is correct";
}
	else
cout<<"The arithmetic statement is false";
}




