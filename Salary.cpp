#include <iostream>
#include <cmath>
using namespace std;

float salary(int n)
{
    float da, hra, ta, total;

    da=0.28*n;
    hra=0.30*n;
    ta=2000;
    total=n+da+hra+ta;
    
    return total;
}

int main()
{
    int a;
    cout<<"Enter base salary: ";
    cin>>a;
    float r = salary(a);
    cout<<"Salary is: "<<r;
}

