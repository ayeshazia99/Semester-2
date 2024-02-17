#include<iostream>
#include<fstream>
using namespace std;
class Person{
string name;
int age;
public:
Person(string x,int y){
name=x;
age=y;
}
};
int main(){
string name;
int age;
string str;
cout<<"Enter name: ";
cin>>name;
cout<<"Enter age: ";
cin>>age;
Person person1(name,age);
fstream f;
f.open("person.bin",ios::out);
f<<name;
f<<age;
f.close();
f.open("person.bin",ios::in);
while(getline(f,str)){
cout<<"The entered name and age is:"<<str;
}
}
