#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    struct Employee
    {
        int id;
        char name[50];
        int exp;
        int sal;
    };
    Employee s[5];
    for(int i=0;i<2;i++)
    {
        cout<<"Enter Employee name: ";
        cin>>s[i].name;
        cout<<"Enter Employee ID: ";
        cin>>s[i].id;
        cout<<"Enter Employee Experience: ";
        cin>>s[i].exp;
        cout<<"Enter Salary: ";
        cin>>s[i].sal;
    }
    for(int i=0;i<2;i++)
    {
        if(s[i].sal<100000 && s[i].exp>=5)
        {
            cout<<"Employee name: "<<s[i].name<<endl;
            cout<<"Employee ID: "<<s[i].id<<endl;
            cout<<"Employee experience: "<<s[i].exp<<endl;
            cout<<"Salary: "<<s[i].sal<<endl;

        }
    }

}