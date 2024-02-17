#include<iostream>
#include<fstream>
using namespace std;
int main(){
fstream f;
fstream f1;
f.open("original.txt",ios::in);
f1.open("copied.txt",ios::app);
char c;
while(f){
f.get(c);
f1.put(c);
}
f.close();
f1.close();
}

