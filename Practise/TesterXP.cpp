#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *nxt;
};

int space = 0;
node *head = NULL;
node *temp;

node *insertatbegin(int val)
{
    node *newnode = new node;
    newnode->data = val;
    newnode->nxt = head;
    head = newnode;
    return head;
}

node *insertatend(int val)
{
    node *newnode = new node;
    temp = new node;
    temp = head;
    newnode->data = val;
    newnode->nxt = NULL;
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        while (temp->nxt != NULL)
        {
            temp = temp->nxt;
        }
        temp->nxt = newnode;
        newnode->nxt = NULL;
    }
    return head;
}

node *deleteatbeg()
{
    temp = head;
    if (head == NULL)
    {
        cout << "there is no element in the linked list" << endl;
    }
    else
    {
        head = temp->nxt;
        delete temp;
    }
    return head;
}

node *deleteatend()
{
    node *ptr;
    temp = head;
    if (head == NULL)
    {
        cout << "there is no element in the linked list" << endl;
    }
    else if (temp->nxt == NULL)
    {
        cout << "there is only one element in the linked list" << endl;
        head = NULL;
    }
    else
    {
        while (temp->nxt != NULL)
        {
            ptr = temp;
            temp = temp->nxt;
        }
        ptr->nxt = NULL;
        delete temp;
    }
    return head;
}

node *insertafterelement(int val, int ele)
{
    node *newnode = new node;
    newnode->data = val;
    temp = head;
    node *preptr = head;
    int existence_check = 0; // to check if the ele exists or not
    if (head == NULL)
    {
        cout << "there is no element in the linked list" << endl;
    }
    else
    {
        while (preptr->data != ele)
        {
            if (temp->nxt == NULL)
            {
                existence_check = 1;
                break;
            }
            else
            {
                preptr = temp;
                temp = temp->nxt;
            }
        }

        if (existence_check == 1)
            cout << "Element to insert after, does not exist!" << endl;
        else
        {
            preptr->nxt = newnode;
            newnode->nxt = temp;
        }
    }
    return head;
}

node *insertbeforelement(int val, int ele)
{
    node *newnode = new node;
    newnode->data = val;
    temp = head;
    node *preptr = head;
    int existence_check = 0; // to check if the ele exists or not
    if (head == NULL)
    {
        cout << "there is no element in the linked list" << endl;
    }
    else
    {
        while (temp->data != ele)
        {
            if (temp->nxt == NULL)
            {
                existence_check = 1;
                break;
            }
            else
            {
                preptr = temp;
                temp = temp->nxt;
            }
        }

        if (existence_check == 1)
            cout << "Element to insert after, does not exist!" << endl;
        else
        {
            preptr->nxt = newnode;
            newnode->nxt = temp;
        }
    }
    return head;
}

void del_value(int val)
{
    if (head->nxt == NULL)
    {
        cout << "underflow" << endl;
    }
    else
    {
        struct node *ptr = head;
        struct node *preptr = head;
        int ch = 0;
        while (ptr->data != val)
        {
            preptr = ptr;
            ptr = ptr->nxt;
            if (ptr == NULL)
            {
                ch = 1;
                break;
            }
        }
        if (ch == 1)
        {
            cout << "the value does not exist" << endl;
        }
        else
        {
            preptr->nxt = ptr->nxt;
            free(ptr);
            space--;
            cout << "the element has been deleted" << endl;
        }
    }
}

void del_after(int pos)
{
    if (head->nxt == NULL)
    {
        cout << "underflow" << endl;
    }
    else
    {
        struct node *newnode = new node;
        struct node *ptr = head;
        struct node *preptr = head;
        struct node *proptr = head;
        int ch = 0;
        while (preptr->data != pos)
        {
            preptr = ptr;
            ptr = ptr->nxt;
            if (ptr == NULL)
            {
                ch = 1;
                break;
            }
            else
                proptr = ptr->nxt;
        }
        if (ch == 1)
        {
            cout << "node after specified node does not exist" << endl;
        }
        else
        {
            preptr->nxt = proptr;
            free(ptr);
            cout << "element after the " << pos << " has been deleted" << endl;
        }
    }
}

void display()
{
    temp = head;
    if (head == NULL)
    {
        cout << "there is no element in the linked list" << endl;
    }
    else
    {
        while (temp != NULL)
        {

            cout << temp->data << " ";
            temp = temp->nxt;
        }
        cout << endl;
    }
}

int main()
{
    int c, ele, val;
    do
    {
        cout << "1. insert at beginning" << endl;
        cout << "2. insert at end" << endl;
        cout << "3. insert after element" << endl;
        cout << "4. insert before element" << endl;
        cout << "5. delete at beginning" << endl;
        cout << "6. delete at end" << endl;
        cout << "7. delete after element" << endl;
        cout << "8. delete a node" << endl;
        cout << "9. display" << endl;
        cout << "enter your choice:\npress '0' to exit.." << endl;
        cin >> c;
        switch (c)
        {
        case 0:
            cout << "bye-bye" << endl;
            exit(c);
            break;
        case 1:
            cout << "enter the element to insert at the beginning:" << endl;
            cin >> ele;
            insertatbegin(ele);
            break;
        case 2:
            cout << "enter the element to insert at the end:" << endl;
            cin >> ele;
            insertatend(ele);
            break;
        case 3:
            cout << "enter the element:" << endl;
            cin >> val;
            cout << "after what value do you want to insert:" << endl;
            cin >> ele;
            insertafterelement(val, ele);
            break;
        case 4:
            cout << "enter the element:" << endl;
            cin >> val;
            cout << "before what value do you want to insert:" << endl;
            cin >> ele;
            insertbeforelement(val, ele);
            break;
        case 5:
            deleteatbeg();
            break;
        case 6:
            deleteatend();
            break;
        case 7:
            cout << "enter the element to delete: " << endl;
            cin >> val;
            del_after(val);
            break;
        case 8:
            cout << "enter the element to delete: " << endl;
            cin >> val;
            del_value(val);
            break;
        case 9:
            display();
            break;
        default:
            cout << "invalid input!\nplease try again.." << endl;
            break;
        }
    } while (c != 0);
}