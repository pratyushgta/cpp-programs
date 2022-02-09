#include <iostream>
using namespace std;
int main()
{
    int a[100][100], b[100][100], sum[100][100], r, c;

    cout<<"Enter no. of rows (between 1-100 only): ";
    cin>>r;
    cout<<"Enter no. of columns (between 1-100 only): ";
    cin>>c;
    cout<<"Enter the values of 1st matrix: "<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<"Enter element "<<i+1<<j+1<<": ";
            cin>>a[i][j];
        }
    }
    cout<<"Enter the values of 2nd matrix: "<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<"Enter element "<<i+1<<j+1<<": ";
            cin>>b[i][j];
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    cout<<"Summation of two matrices is:  "<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
}




