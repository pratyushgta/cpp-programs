#include <iostream>
#include <cstring>
using namespace std;

int queue[100];
int size=100;
int front=-1;
int rear=-1;

void insert(int n)
{
    if(rear>=size-1){
    cout<<"OVERFLOW!"<<endl;
    }
    else if(front==-1){
        front=0;
        queue[++rear]=n;
        cout<<"Value Inserted!"<<endl;
    }
    else{
         queue[++rear]=n;
         cout<<"Value Inserted!"<<endl;
    }
}

void remove()
{
    if(front!=-1 || front<rear){
    queue[front];
    front++;
    }
    else
    cout<<"UNDERFLOW!"<<endl;
}

void display()
{
    if(front==-1)
    cout<<"Queue is Empty!"<<endl;
    else{
    for(int i=front;i<=rear;i++){
    cout<<queue[i]<<" ";
    }
    cout<<endl;
    }
}

int main()
{
    int choice=0;
    int push_val=0;

    do{
    cout<<"\nQUEUE OPERATIONS\n1. Insert\n2. Delete\n3. Display\n4. Exit"<<endl;
        cout<<"Enter: "<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1: cout<<"Enter a number to insert: "<<endl;
            cin>>push_val;
            insert(push_val);
            break;

            case 2: remove();
            break;

            case 3: display();
            break;

            case 4: cout<<"Goodbye!"<<endl;
            break;

            default: cout<<"Invalid Input"<<endl;
            break;
        } 
    }
    while(choice<4);
}

