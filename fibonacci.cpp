#include <iostream>
using namespace std;
int main()
{

    int n1=0; 
    int n2=1;
    int n3, n;
    cout<<"Enter N: ";
    cin>>n;

    cout<<n1<<" "<<n2;

    for(int i=2; i<n;i++)
    {
        n3=n1+n2;
        cout<<" "<<n3;
        n1=n2;
        n2=n3;
    } 
}

