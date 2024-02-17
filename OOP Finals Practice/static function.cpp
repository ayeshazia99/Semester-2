#include<iostream>
using namespace std;
class A
{
	public:
	A(int x )
	{  }
	
static void f(A myOb)
{
	myOb.f2( );	// OK
}
	
	void f2( )
	{
	cout << "Instance function";
	}
}; 
int main() 
{
	A ob(10);
	A::f(ob);
// passing object as an argument
}


