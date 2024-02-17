#include<iostream>
using namespace std;
class object{
int a;
public:
object(){
}
object(int x){
a=x;
}
void showdata(){
cout<<"Value of a is:"<<a;

}
bool operator <(object obj){
if(a<obj.a){
return true;
}
else
return false;
}
};
int main(){
object o1(5);
object o3(4);
if(o3<o1){
cout<<"hehe";
}
}
