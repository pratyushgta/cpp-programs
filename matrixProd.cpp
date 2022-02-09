#include <iostream>
using namespace std;
int main()
{
    int a[100][100], b[100][100], mult[100][100], r1, r2, c1, c2;

    cout<<"Enter no. of rows of 1st matrix (between 1-100 only): ";
    cin>>r1;
    cout<<"Enter no. of columns of 1st matrix (between 1-100 onl): ";
    cin>>c1;
    cout<<"Enter no. of rows of 2nd matrix (between 1-100 only): ";
    cin>>r2;
    cout<<"Enter no. of columns of 2nd matrix (between 1-100 onl): ";
    cin>>c2;

    cout<<"Enter the values of 1st matrix: "<<endl;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cout<<"Enter element "<<i+1<<j+1<<": ";
            cin>>a[i][j];
        }
    }
    cout<<"Enter the values of 2nd matrix: "<<endl;
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout<<"Enter element "<<i+1<<j+1<<": ";
            cin>>b[i][j];
        }
    }
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            for(int k=0;k<c1;k++)
            {
            mult[i][j]+=a[i][k]*b[k][j];
            }  
        }
    }
    cout<<"Multiplication of two matrices is:  "<<endl;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout<<mult[i][j]<<" ";
        }
        cout<<endl;
    }
}




