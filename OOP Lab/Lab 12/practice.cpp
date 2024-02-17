#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class student{
char name[25];
int age;
int score;
public:
void input(){
cout<<"Enter name:";
cin>>name;
cout<<"Enter age:";
cin>>age;
cout<<"Enter score:";
cin>>score;
fstream f;
f.open("parti.dat");
f<<name;
f<<age;
f<<score;
f.close();
}
void output(){
char x[25];
cout<<"Enter name:";
cin>>x;
fstream f1;
f1.open("parti.dat");
while(f1){
if(strcmp(x,name)==0){
cout<<"name:\n"<<name;
cout<<"age:\n"<<age;
cout<<"score:\n"<<score;
}
break;
}
f1.close();
}
void max(){
int max;
int score1=0;
fstream f2;
f2.open("parti.dat");
while(f2){
if(score>score1){
max=score;
}
}
cout<<"max is:"<<max;
f2.close();
}
};
int main(){
student s;
char c;
while(c!='n'){
	s.input();
cout<<"Do you want to add more?";
cin>>c;
}
s.output();
s.max();
}
