#include <iostream>
#include <String>
using namespace std;

class Animal{ //base class
    private:
    string color;

    protected:
    string type;

    public:
    void eat()
    {
        cout<<"I can eat"<<endl;
    }

    void setcolor(string clr)
    {
        color=clr;
    }

    string getcolor()
    {
        return color;
    }
};


class Dog : public Animal{ //derived class
    public:
    void settype(string tp)
    {
        type=tp;
    }

    void display(string c)
    {
        cout<<"My type "<<type<<endl;
        cout<<"My color "<<c<<endl;
    }

};

int main(){
    Dog Dog1;

    Dog1.eat();
    Dog1.setcolor("Black");

    Dog1.settype("mammal");
    Dog1.display(Dog1.getcolor());

}