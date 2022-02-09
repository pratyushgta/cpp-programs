#include <iostream>
using namespace std;

float convert(float val, int ch)
{
    if(ch==2)
    {
    cout<<val<<" in Euro is: "<<val*80;  
    }
    else if(ch==1)
    {
        cout<<val<<" in Pounds is: "<<val*90; 
    }
    else
    {
        cout<<"Invalid";
    }
}

int main()
{
    float x;
    int choice;
    cout<<"Enter value: ";
    cin>>x;
    cout<<"Convert to which currency: "<<"\n"<<"1. Pound"<<"\n"<<"2. Euro"<<"\n";
    cin>>choice;
    int res=convert(x,choice);

}