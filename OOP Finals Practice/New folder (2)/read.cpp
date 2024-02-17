#include<iostream>
#include<fstream>
using namespace std;
int main(){
fstream in("xyztxt.txt");
char* line;
int n=50;
in.read(line,50);
cout<<line;
}
