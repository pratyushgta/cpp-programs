#include <iostream>
#include <string.h>

using namespace std;


int main()
{
int count=0,i=0,j;
for(i=1;i<=2;i=i+1)
    if(i%2==0)
    {
        for(j=1;j<=10;j++)
        count=count+j;}
        else
        { 
            for(j=11;j<=20;j++)
            count=count+j;
        }
        cout<<count;
}

 