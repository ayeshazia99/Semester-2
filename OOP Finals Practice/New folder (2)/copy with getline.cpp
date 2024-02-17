#include<iostream>
#include<fstream>
using namespace std;
int main(){
fstream f;
fstream f1;
f.open("original.txt");
f1.open("copied.txt");
string line;
getline(f,line);
f1<<line;

f.close();
f1.close();
}

