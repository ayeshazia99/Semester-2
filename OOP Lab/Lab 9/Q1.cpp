#include<iostream>
using namespace std;
class object{
int x;
public:
	object(){
	x=0;
	}
object operator --(){
object temp;
cout<<"Enter value : ";
cin>>x;
temp.x=x*4;
return temp;
}
object operator--(int){
object temp;
cout<<"Enter value : ";
cin>>x;
temp.x=x/4;
return temp;
}
void showdata(){
cout<<"The new value is : "<<x;
}
};
int main(){
object obj;
object obj1;

cout<<endl;
obj1 = --obj;
obj1.showdata();
cout<<endl;
obj1=obj--;
obj1.showdata();

}
