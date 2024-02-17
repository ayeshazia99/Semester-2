#include<iostream>
#include<fstream>
using namespace std;
int main(){
fstream in("xyztxt.txt");
string c;
getline(in,c);
cout<<c;
}
