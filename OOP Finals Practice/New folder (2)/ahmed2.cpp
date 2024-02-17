#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	char c='A';
	fstream in;
	in.open("ayesha.txt");
	  if(!in) {
    cout << "Cannot open file.\n";
    return 1;
  }
	in.put(c);
	in<<"Ahmed Bawany";
	in.seekg(6);
	in.put(c);
	in.close();
	in.open("ayesha.txt");
	while(in){
 char ch;
 in.get(ch);
 cout<<ch;
	}
	break;
	in.close();
}
