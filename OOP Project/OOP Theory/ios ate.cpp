#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main(){
ofstream abc;
abc.open("iosatefile.txt",ios::app|ios::ate);
abc<<"\nI am a Computer Science Student";
abc.close();
//binary for space
//ate append to end+
}
