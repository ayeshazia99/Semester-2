#include<iostream>
#include<fstream>
using namespace std;
int main(){
//creating string which will be used to output to the file
string myStringText;
// reading from the text file
ifstream myFile("anderson.txt");
// while loop with getline function to read the file line by line
while(getline(myFile, myStringText)){
// output the text from the file 
cout<<myStringText;
cout<<"\n";
}
myFile.close();

}
