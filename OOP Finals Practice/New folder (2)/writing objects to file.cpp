#include<iostream>
#include<fstream>
using namespace std;
class student{
char name[25];
int age;
int marks;
public:
	int getdata(char x[25],int y,int z){
	name[25]=x[25];
	age=y;
	marks=z;
	}
void addrecord(){
student s;
fstream f("student.dat",ios::app|ios::binary);
f.write((char*)&s, sizeof(s));
f.close();
}
void display(){
cout<<"Name:"<<name;
cout<<"Age:"<<age;
cout<<"Marks:"<<marks;
}
void readdata(){
fstream f("student.dat",ios::in|ios::binary);
student s;
f.read((char*)&s, sizeof(s));
}
};
int main(){
char name[25];
int age;
int marks;
student s;
cout<<"Enter name:";
cin>>name;
cout<<"Enter age:";
cin>>age;
cout<<"Enter marks:";
cin>>marks;
s.getdata(name,age,marks);
s.addrecord();
s.readdata();
s.display();
}
