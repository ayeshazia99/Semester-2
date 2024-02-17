#include<iostream>
#include<fstream>
using namespace std;
int main(){
fstream f1;
f1.open("xyz.txt",ios::app);
f1<<"hello world ahmed";
f1.close();
fstream f2;
f2.open("xyz.txt");
char ch;
f2.ignore(5,' ');
while(!f2.eof()){
f2.get(ch);
cout<<ch;
}
f2.close();
}
