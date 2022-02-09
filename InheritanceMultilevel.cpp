#include <iostream>
#include <String>
using namespace std;

class A{ //base class
    public:
    void display()
    {
        cout<<"We are in class A ";
    }
};

class B:public A{

};
class C:public B{

};
int main(){
   C obj1;
   obj1.display();
}