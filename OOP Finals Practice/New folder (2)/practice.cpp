#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main(){
fstream f;
int answer=0;
f.open("story.txt");
string line;
char c;

while(getline(f,line)){
f.get(c);
if(c!='A'){
answer++;
}
}
cout<<"The number of line without A are:"<<answer;
}
