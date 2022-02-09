#include<iostream>
using namespace std;
 


void upper()
{
    cout<<"Enter 25 elements: ";
    
    int arr[5][5];


    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
        cin>>arr[i][j];    
        }
    }
     
    
            
     cout<<"Upper triangular matrix: ";    
            for(int i = 0; i < 5; i++){    
                for(int j = 0; j < 5; j++){    
                  if(i > j)    
                    cout<<"";    
                  else    
                    cout<<arr[i][j]<<" ";    
                }    
                cout<<endl;    
            }
}

void lower()
{
    cout<<"Enter 25 elements: ";
    
    int arr[5][5];


    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
        cin>>arr[i][j];    
        }
    }
     
    
            
     cout<<"Lower triangular matrix: ";    
            for(int i = 0; i < 5; i++){    
                for(int j = 0; j < 5; j++){    
                  if(i < j)    
                    cout<<"";    
                  else    
                    cout<<arr[i][j]<<" ";    
                }    
                cout<<endl;    
            }
}
int main()
{
    upper();
    lower();
}

 
