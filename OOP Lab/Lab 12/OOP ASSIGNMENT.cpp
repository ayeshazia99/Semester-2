#include<iostream>
#include<fstream>
using namespace std;
int main(){
fstream f;
fstream f1;
char ch;
string str;
int count=0;
f.open("input.txt",ios::in);
f1.open("deifiniaz.txt",ios::out|ios::in);
while(!f.eof()){{
f.get(ch);
if(ch=='1')
ch='A';
f1<<ch;
}
}
}
