#include <iostream>
using namespace std;



int q[100],n=100,front=-1,rear=-1;



void insert()
{
int val;
if(rear==n-1)
cout<<"queue overflow"<<endl;
else
{
if(front==-1)
front=0;
cout<<"insert an element in queue: "<<endl;
cin>>val;
rear++;
q[rear]=val;
}
}
void deletex()
{
if(front==-1 || front>rear)
{
cout<<"queue underflow";
return;
}
else
{
cout<<q[front]<<" is deleted"<<endl;
front++;
}
}
void display()
{
int i;
if(front==-1)
cout<<"the queue is empty"<<endl;
else
{
cout<<"the elements in the queue are - ";
for(i=front;i<=rear;i++)
cout<<q[i]<<" ";
cout<<endl;
}
}
int main()
{
int c;
cout<<"1. Insert"<<endl;
cout<<"2. Delete"<<endl;
cout<<"3. Display"<<endl;
cout<<"4. Exit"<<endl;
do
{
cout<<"Enter your choice: "<<endl;
cin>>c;
switch(c)
{
case 1: insert();
break;
case 2: deletex();
break;
case 3: display();
break;
case 4: cout<<"bye-bye"<<endl;
break;
default: cout<<"Invalid Input! \nplease try again"<<endl;
}
}while(c!=4);
return 0;
}