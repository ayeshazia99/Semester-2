#include<iostream>
using namespace std;
class Animal{
public:
void animalSound(){
cout<<"The animal makes a sound.";
}
};
class Cat: public Animal{
public:
void animalSound(){
cout<<"The cat says meow.";
}
};
class Dog: public Animal{
public:
void animalSound(){
cout<<"The dog says bow wow.";
}
};
class Duck: public Animal{
public:
void animalSound(){
cout<<"The duck says quack quack.";
}
};
int main(){
Animal a;
Cat c;
Dog d;
Duck d1;
a.animalSound();
c.animalSound();
d.animalSound();
d1.animalSound();
}
