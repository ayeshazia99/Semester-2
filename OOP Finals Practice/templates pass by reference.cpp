#include<iostream>
using namespace std;
template <class T> void swapargs(T a, T b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
	cout<<"This is a"<<a;
		cout<<"This is b"<<b;

}
int main(){
int i=10;
int j=20;
swapargs(i,j);
}
