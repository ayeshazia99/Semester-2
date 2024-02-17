#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	
char c;
fstream in("xyztxt.txt");
cout << "Before input, cin.eof() is"<< in.eof();
cout << "Enter input followed by eof" <<  endl;
cin>>character;
char character='A';
while(in.get()!= EOF)
	in.put( character );
cout << "EOF in this system is:" << character;
cout << "After input, cin.eof() is: " << in.eof();
}

