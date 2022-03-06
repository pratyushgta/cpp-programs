#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
node *head=NULL;
node *t;
node *insert_begin(int val)
{
    node *newnode = new node;
    newnode->data=val;
    newnode->next=head;
    head=newnode;
    return head;
}
node *insert_end(int val)
{
    node *newnode = new node;
    t=new node;
    t=head;
    newnode->data=val;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
    }

    else
    {
       while(t->next!=NULL)
       {
           t=t->next;
       }
       t->next=newnode;
       newnode->next=NULL;

    }
    return head;
}

node *del_beg()
{
      t=head;
      if(head==NULL)
      {
          cout<<"No element in Linked List";
      }
      else
      {
          head=t->next;
          delete t;
      }

      return head;
}
node *del_end()
{

    node *ptr;
    t=head;

    //ptr=head;
    if(head==NULL)
    {
        cout<<"No element in Linked List";
    }
    else if(t->next==NULL)
    {
        cout<<"only one element"<<endl;
        head=NULL;

    }
    else
    {
        while(t->next!=NULL)
        {
            ptr=t;
            t=t->next;
        }
        ptr->next=NULL;
        delete t;


    }

    return head;

}
node *insert_afterelem(int val, int ele)
{
    node *newnode = new node;
    newnode->data=val;
    t=head;
    if(head==NULL)
    {

        cout<<"No element in Linked list";
    }
    else
    {
        while(t->data!=ele)
        {
            if(t->next==NULL)
            {
                goto input;
            }
            else
            {
               t=t->next;
            }

        }
        newnode->next=t->next;
        t->next=newnode;
    }
    input:
    return head;
}
node *insert_beforelem(int val, int ele)
{
    node *newnode = new node;
    node *preptr;
    newnode->data=val;
    t=head;
    preptr=head;
    if(head==NULL)
    {

        cout<<"No element in Linked list";
    }
    else
    {

        while(t->data!=ele)
        {
            preptr=t;
            t=t->next;
        }
        preptr->next=newnode;
        newnode->next=t;

    }
    return head;
}
void display()
{

    t=head;
    if(head==NULL)
    {
        cout<<"No element in Linked list";
    }
    else
    {
        while(t!=NULL)
        {

            cout<<t->data<<" ";
            t=t->next;

        }
    }

}
int main()
{
    int ch,ele,val;



    do
    {
        cout<<" \n 1 To insert at begining \n 2 To insert at end \n 3 To delete from beg \n 4 To delete from end \n 5 To insert after element \n 6 To insert before element \n 7 Display \n 8 Exit";
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"Enter Element"<<endl;
            cin>>ele;
            insert_begin(ele);
            break;
        case 2:
            cout<<"Enter Element"<<endl;
            cin>>ele;
            insert_end(ele);
            break;
        case 3:
            del_beg();
            break;
        case 4:
            del_end();
            break;
        case 5:
            cout<<"Enter Element you want to insert"<<endl;
            cin>>val;
            cout<<"After which value you want to insert"<<endl;
            cin>>ele;
            insert_afterelem(val,ele);
            break;
        case 6:
            cout<<"Enter Element you want to insert"<<endl;
            cin>>val;
            cout<<"After which value you want to insert"<<endl;
            cin>>ele;
            insert_beforelem(val,ele);
            break;
        case 7:
            display();
            break;
        case 8:
            break;
        }
    }while(ch!=8);
}