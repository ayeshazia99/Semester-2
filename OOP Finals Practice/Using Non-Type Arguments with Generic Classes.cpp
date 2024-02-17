#include<iostream>
using namespace std;
template <class T, int size> class MyClass
{
public:
	int i;
	T func(T arr[size]){
	for(i=0;i<size;i++){
	cout<<arr[i];
	}
	}
	// length of array is passed in size
	// rest of the code in class
};
int main()
{
		MyClass<int, 10> intob;
		MyClass<double, 5> doubleob;
		int arr[]={1,2,3,4,5,6,7,8,9,10};
        double arr1[]={1.2,3.2,4.5,6.7,8.9};
		intob.func(arr);
		doubleob.func(arr1);
}

