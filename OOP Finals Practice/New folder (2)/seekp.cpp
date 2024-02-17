
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  fstream in("hehe.txt");
  if(!in) {
    cout << "Cannot open file.\n";
    return 1;
  }
     in.seekp(6,ios::cur);
in<<"hey there";
in.close();
in.open("hehe.txt");
while(in){
	char c;
in.get(c);
cout<<c;
}
  in.close();
  return 0;
}
