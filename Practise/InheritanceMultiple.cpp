#include <iostream>
#include <String>
using namespace std;

class mammal
{
    public:
    mammal() //CONSTRUCTOR DONT NEED TO BE INVOKED! They invoke automatically
    {
        cout<<"Mammal can give birth ";
    }
};

class wingedanimal
{
    public:
    wingedanimal()
    {
        cout<<"Winged animal can fly ";
    }

};

class Bat:public mammal, public wingedanimal
{

};

int main()
{
    Bat B1;
}