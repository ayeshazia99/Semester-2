#include<iostream>
#include<fstream>
using namespace std;
int main(){
fstream f;
char ch;
string str;
int count=0;
f.open("STORY.txt",ios::in);
while(getline(f,str)){{
f.get(ch);
if(ch!='A')
count++;
}
}
cout<<"The count is: "<<count;
}
