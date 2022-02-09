#include <iostream>
using namespace std;

class box
{
    public:
    int l;
    int b;
    int h;

int area()
{
    return l*b;
}
};

int main()
{
    box b1, b2;
    b1.l=10;
    b1.b=10;
    b1.h=10;
    b2.l=20;
    b2.b=20;
    b2.h=20;

    cout<<b1.area();

}

