#include <iostream>
using namespace std;
int main()
{
    int n=0;

    cout<<"Enter a number: ";
    cin>>n;

    if(n%2==0 || n%3==0 && n%5!=0)
    {
        cout<<"Number is perfect!";
    }
    else
    {
        cout<<"Number is not perfect";
    }
}
