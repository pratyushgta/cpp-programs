#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    struct student
    {
        int code;
        char name[50];
        int marks;
        int deptno;
    };
    struct student s;
    cout<<"Enter student code: ";
    cin>>s.code;
    cout<<"Enter student name: ";
    cin>>s.name;
    cout<<"Enter student marks: ";
    cin>>s.marks;
    cout<<"Enter department no.: ";
    cin>>s.deptno;
    char deptname[50];
    if(s.deptno==1)
    strcpy(deptname,"IT");
    else if(s.deptno==2)
    strcpy(deptname,"Computer");
    else if(s.deptno==3)
    strcpy(deptname,"EXTC");
    else if(s.deptno==4)
    strcpy(deptname,"Data Science");
    cout<<"\n Student Code: "<<s.code;
    cout<<"\n Student Name: "<<s.name;
    cout<<"\n Student Marks: "<<s.marks;
    cout<<"\n Department: "<<deptname;

}