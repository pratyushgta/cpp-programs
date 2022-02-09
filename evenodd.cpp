#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    if(num!=0)
    {
        if(num%2==0)
        cout<<"Number is even";
        else
        cout<<"Number is odd";
    }
    else
    {
        cout<<"Number is 0. It is neither even or odd."<<endl;

    }
}