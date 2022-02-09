#include <iostream>
#include <cmath>
using namespace std;

int fact(int x)
{
    int n=x;
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"Factorial of "<<x<<" is: "<<fact;
}

int main()
{
    int a;
    cout<<"Enter value of a: ";
    cin>>a;
    fact(a);

}

