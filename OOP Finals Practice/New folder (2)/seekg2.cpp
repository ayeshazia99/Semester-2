#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream f("hehe.txt");
    char *txt=new char[6];
    f.seekp(-6,ios::end);
    f.read(txt,6);
    for(int i=0;i<6;i++){
        cout<<txt[i];
    }
}
