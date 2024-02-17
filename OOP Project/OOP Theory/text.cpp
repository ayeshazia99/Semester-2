#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main(){
ofstream abc;
abc.open("texfile.txt",ios::app|ios::ate);
abc<<"I am Zia";
abc.close();
}
