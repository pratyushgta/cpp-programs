#include <iostream>
using namespace std;


int n=0;
int sum, avg;

void calculate()
{
    cout<<"Enter 10 elements: ";
    
    int arr[10];


    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<10;i++)
    {
        sum+=arr[i];
    }
    avg=sum/10;
    cout<<"Average is: "<<avg;
}

int main()
{
    
    calculate();

}