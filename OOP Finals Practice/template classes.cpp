#include<iostream>
using namespace std;
template <class T1, class T2> class myclass
{
	T1 i;
	T2 j;
	public:
	myclass (T1 a, T2 b) { i = a; j = b; }
	void show( ) { cout << i << "&" << j; }
};
int main()
{
	myclass<int, double> ob1(10, 0.23);
	myclass<char, char> ob2('X', "Hello");

	ob1.show();	// show int, double
	ob2.show();	// show char, char *
}

