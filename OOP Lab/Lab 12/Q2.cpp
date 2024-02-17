#include<iostream>
#include<fstream>
using namespace std;
int main(){
string str;
fstream f;
fstream f1;
f.open("question2.txt",ios::in);
f1.open("copied.txt",ios::out|ios::in);
while(getline(f,str)){
cout<<"This is the original file content: "<<str<<endl;
f1<<str;
}
f1.close();
f1.open("copied.txt",ios::in);
while(getline(f1,str)){
cout<<"This is content of the copied file: "<<str<<endl;
}
f.close();
f1.close();
}
