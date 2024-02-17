#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class Participant{
char ID[20];
string name;
int score;
public:
void Input(){
cout<<"Enter your ID: ";
cin>>ID;
cout<<"Enter your name: ";
cin>>name;
cout<<"Enter your score: ";
cin>>score;
fstream f;
f.open("participant.dat",ios::app | ios::binary);
f<<"ID: "<<ID;
f<<"Name: "<<name;
f<<"Score: "<<score;
f.close();
}
void Output(){
char check_ID[20];
string str;
cout<<"Enter your ID: ";
cin>>check_ID;
fstream f2;
f2.open("participant.dat",ios::in);
while(!f2.eof()){
        if(strcmp(ID, check_ID)==0){
        cout<<"ID: "<<ID;
        cout<<"\nName: "<<name;
        cout<<"\nScore: "<<score;
        cout<<"\n";
		}
break;
}
f2.close();
}
void Max(){
fstream f3;
int scores=0;
string str;
int maximum;
f3.open("participant.dat",ios::in);
while(getline(f3,str)){
if(score>scores){
maximum=score;
}
}
cout<<"The maximum score is: "<<maximum;
f3.close();
}
};
int main(){
Participant p;
char a;
while(a!='n'){
p.Input();
cout<<"Do you want to add more records?(y/n): ";
cin>>a;
}
cout<<"SEARCH ID\n";
p.Output();
cout<<"HIGHEST SCORE\n";
p.Max();
}
