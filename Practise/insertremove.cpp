#include <iostream>
#include <string.h>

using namespace std;

class addRemove
{
    public:
    int a[100];
    int s;
    int p;
    int counter;
    int total;

    int insert(int size)
    {
        a[size];
        cout<<"Enter "<<size<<" elements: "<<endl;
        for(int i=0;i<size;i++)
        {
            cin>>a[i];
        }

    }

    int remove(int element)
    {
        total=sizeof(a);
        counter=0;
        int temp[element];
        for(int i=0;i<total;i++)
        {
            if(a[i]==element)
            {
                for(int j=i;j<total-1;j++)
                {
                    a[j]=a[j+1];
                }
                counter++;
                i--;
                total--;
            }
        }

    }

    void display()
    {
        total=sizeof(a);
        for(int i=0;i<total;i++)
        {
            cout<<a[i]<<" ";
        }
    }

};

int main()
{
    addRemove obj;
    cout<<"Enter the number of elements you want to add: "<<endl;
    cin>>obj.s;
    obj.insert(obj.s);
    obj.display();
    cout<<"Enter the number of elements you want to remove: "<<endl;
    cin>>obj.p;
    obj.remove(obj.p);
     obj.display();
}

