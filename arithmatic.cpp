//by Pratyush Kumar
#include <iostream>
using namespace std;
int main() 
{
    float firstno, secondno, sum, div, prod, diff;
    cout<<"Enter two numbers: ";
    cin>>firstno>>secondno;
    sum=firstno+secondno;
    div=firstno/secondno;
    diff=firstno-secondno;
    prod=firstno*secondno;
    
    cout<<"Addition="<<firstno<<"+"<<secondno<<"="<<sum<<"\n";
    cout<<"Difference="<<firstno<<"-"<<secondno<<"="<<diff<<"\n";
    cout<<"Product="<<firstno<<"*"<<secondno<<"="<<prod<<"\n";
    cout<<"Division="<<firstno<<"/"<<secondno<<"="<<div<<"\n";
    
    return 0;
}