#include <iostream>
using namespace std;
int main()
{
    int n=0, num=0, rev=0, rem=0;

    cout<<"Enter a number: ";
    cin>>n;

    num = n;

    while(n>0)
    {
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }

    if(num==rev)
    cout<<"Palindrome Number";
    else
    cout<<"Not a Palindrome Number";
}