#include <iostream>
using namespace std;

int main()
{
    int r=0; 
    int c=0;
   

    cout<<"Enter r n c ";
    cin>>r>>c;
    int arr[r][c];

cout<<"Enter "<<r*c<<" elements:"<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}