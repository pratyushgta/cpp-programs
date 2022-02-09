#include <iostream>
using namespace std;

int main()
{
    int a=5;
    int b=10;
    int c=20;
    int temp;

    cout<<"Before swapping: "<<endl;
    cout<<"a = "<<a<<", b = "<<b<<", c = "<<c<<endl;

    temp = a;
    a = b;
    b = c;
    c = temp;
    
    cout<<"\nAfter swapping: "<<endl;
    cout<<"a = "<<a<<", b = "<<b<<", c = "<<c<<endl;
    return 0;
}