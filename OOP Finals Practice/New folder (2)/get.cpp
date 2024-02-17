#include<iostream>
#include<fstream>
using namespace std;
int main(){
fstream in("xyztxt.txt");
char c;
in.get(c);
cout<<c;
}
