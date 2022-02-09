//by Pratyush Kumar
#include <iostream>
using namespace std;
int main()
{
    int n, i;
    float marks[10], per=0, total=0;
    
    cout<<"Enter number of subjects: ";
    cin>>n;
    cout<<"Enter marks of "<<n<<" subjects"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>marks[i];
    }
    for(int i=0;i<n;i++)
    {
        total = total+marks[i];
    }
    per=total/n;
    cout<<"Percentage = "<<per<<"%"<<endl;
    if(per>=85)
    cout<<"A grade";
    else if(per>=75 && per<85)
    cout<<"B grade";
    else if(per>=55 && per<75)
    cout<<"C grade";
    else if(per>=35 && per<55)
    cout<<"D grade";
    else
    cout<<"Fail :(";
}    
