#include<iostream>
#include<fstream>
using namespace std;
int main(){
string x;
fstream f;
int count=0;
char ch;
f.open("string.txt",ios::out);
cout<<"Enter string: ";
getline(cin,x);
f<<x;
f.close();
f.open("string.txt",ios::in);
while(!f.eof()){
f.get(ch);
count++;
}
cout<<"The string is "<<count<<" letters long";
}
