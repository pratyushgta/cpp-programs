#include <iostream>
using namespace std;

int main(){

    int var=5;

    int* pointVar; //declaring pointer variable which will be used to store ADDRESS of var

    pointVar = &var; //assigning ADDRESS of var to pointVar;

    cout<<"var = "<<var<<endl; //print value of var

    cout<<"Address of var (&var) = "<<&var<<endl; //print ADDRESS of var

    cout<<"pointVar = "<<pointVar<<endl; //print pointer

    cout<<"Content at pointVar = "<<*pointVar<<endl; //print content stored in the ADDRESS
}