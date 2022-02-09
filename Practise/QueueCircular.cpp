#include <iostream>
#include <cstring>
using namespace std;


int queue[100];
int size=100;
int front=-1;
int rear=-1;

void insert(int n)
{
    if(front==0 && rear==size-1 || front==rear+1){
        cout<<"OVERFLOW!"<<endl;
    }
    else
    {
        if(front==0){
            front=0;
            rear=0;
        }
        else if(rear==size-1)
        {
            rear=0;
        }
        else
        {
            rear=rear+1;
        }
    }
    queue[rear]=n;
    cout<<"Value Pushed"<<endl;
}

void remove()
{
cout<<"UNDERFLOW!"<<endl;
}

int main()
{

}