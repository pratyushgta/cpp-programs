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
        cout<<num<<" is even";
        else
        cout<<num<<" is odd";
    }
    else
    {
        cout<<"Number is 0. It is neither even nor odd";

    }

    if(num>0)
    {
        cout<<" & positive!";
    }
    else if(num<0)
    {
        cout<<" & negative!";
    }
    else
    {
        cout<<" & neither negative, nor positive!";
    }
}