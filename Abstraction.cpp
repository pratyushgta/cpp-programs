#include <iostream>
using namespace std;
class demo{
    private:
    int a,b;

    public:
    void set(int x, int y){
        a=x;
        b=y;
    }
    void display()
    {
        cout<<a<<endl;
        cout<<b;
    }
};

int main()
{
    demo obj1;
    obj1.set(10,20);
    obj1.display();
}