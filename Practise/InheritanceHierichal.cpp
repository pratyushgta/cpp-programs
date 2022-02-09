#include <iostream>
#include <String>
using namespace std;

class Animal
{
    public:
    void info()
    {
          cout<<"I am animal ";
    }
};

class Dog:public Animal
{
    public:
    void bark()
    {
        cout<<"woof woof ";
    }
};

class Cat:public Animal
{
    public:
    void meow()
    {
        cout<<"I am cat ";
    }
};

int main()
{
    Dog Dog1;
    Dog1.bark();
    Dog1.info();

    Cat cat;
    cat.meow();
    cat.info();
}
