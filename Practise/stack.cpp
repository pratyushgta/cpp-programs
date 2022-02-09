#include <iostream>
using namespace std;


int stack[100];
int size=100;
int top=-1;

void push(int n)
{
    if(top>n-1)
    cout<<"OVERFLOW!"<<endl;
    else{
    stack[++top]=n;
    cout<<"Value Pushed"<<endl;
    }
}

void pop()
{
    if(top<=-1)
    cout<<"UNDERFLOW!"<<endl;
    else{
        cout<<"Popped Element is: "<<stack[top]<<endl;
        top--;
    }
}

void peek()
{
    if(top==-1)
    cout<<"Stack is empty!"<<endl;
    else
    cout<<"Value of top: "<<top<<endl;
}

void display()
{
    if(top>=0)
    {
        cout<<"Elements in Stack: ";
        for(int i=top;i>=0;i--)
        {
            cout<<stack[i]<<" ";
        }
        cout<<endl;
    }
    else
    {
        cout<<"Stack is empty";
    }
}

int main()
{
    int choice=0;
    int push_val=0;

    do{
    cout<<"\nSTACK OPERATIONS\n1. Push\n2. Pop\n3. Display\n4. Peek\n5. Exit"<<endl;
        cout<<"Enter: "<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1: cout<<"Enter a number to push: "<<endl;
            cin>>push_val;
            push(push_val);
            break;

            case 2: pop();
            break;

            case 3: display();
            break;

            case 4: peek();
            break;

            case 5: cout<<"Goodbye!"<<endl;
            break;

            default: cout<<"Invalid Input"<<endl;
            break;
        } 
    }
    while(choice<5);
}