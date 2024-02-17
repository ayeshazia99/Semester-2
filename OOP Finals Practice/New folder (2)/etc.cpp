
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream in;
  in.open("hehe.txt");
  if(!in) {
    cout << "Cannot open file.\n";
    return 1;
  }

  /* Ignore up to 10 characters or until first space is found. */
  in.ignore(10, '\n');
  char c;
  while(in!=EOF()) {
    in.get(c);
    if(in) 
       cout << c;
  }

  in.close();
  return 0;
}
