#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
  {
  ofstream f;
  string filename;
string name;
cout << "Please enter a file name to write: ";
  getline( cin, filename );
  f.open( filename.c_str(),ios::out );
  cout<<"Name : ";
  cin>>name;
  f<<"Name : ";
  f<<name;
  f.close();

  cout << "Good job! 'type' or 'cat' your new file to see what it says.\n";
  return 0;
  }
