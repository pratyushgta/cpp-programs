#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
};

struct node *head = NULL;

void insert_atstart(int newdata)
{
    node *newnode = new node;
    newnode->data = newdata;
    newnode->next = head;
    newnode->prev = NULL;

    if (head != NULL)
    {
        head->prev = newnode;
    }
    head = newnode;
    return;
}

void insert_atend(int newdata)
{
    node *newnode = new node;
    node *last = head;
    newnode->data = newdata;
    newnode->next = NULL;
    if (head == NULL)
    {
        newnode->prev = NULL;
        head = newnode;
    }
    else
    {
        while (last->next != NULL)
        {
            last = last->next;
        }
        last->next = newnode;
        newnode->prev = last;
    }
}

void delete_atstart()
{
    struct node *ptr;
    if (head == NULL)
    {
        cout << "underflow" << endl;
    }
    else if (head->next == NULL)
    {
        free(head);
        head = NULL;
        cout << "the node has been deleted" << endl;
    }
    else
    {
        ptr = head;
        head = head->next;
        head->prev = NULL;
        free(ptr);
        cout << "the node has been deleted" << endl;
    }
}

void delete_atend()
{
    struct node *ptr;
    if (head == NULL)
    {
        cout << "underflow" << endl;
    }
    else if (head->next == NULL)
    {
        free(head);
        head = NULL;
        cout << "the node has been deleted" << endl;
    }
    else
    {
        ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->prev->next = NULL;
        free(ptr);
        cout << "the node has been deleted" << endl;
    }
}

void display()
{
    struct node *ptr;
    ptr = head;
    if (head == NULL)
        cout << "List is empty!" << endl;
    else
    {
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        while (ptr != NULL)
        {
            cout << ptr->data << " ";
            ptr = ptr->prev;
        }
        cout << endl;
    }
}

int main()
{
    int c, ele;
    do
    {
        cout << "1. insert at start" << endl;
        cout << "2. insert at end" << endl;
        cout << "3. delete at start" << endl;
        cout << "4. delete at end" << endl;
        cout << "5. display" << endl;
        cout << "6. clearscreen" << endl;
        cout << "enter your choice:\npress '0' to exit" << endl;
        cin >> c;
        switch (c)
        {
        case 0:
            cout << "bye-bye" << endl;
            exit(c);
            break;
        case 1:
            cout << "enter the element to insert at start" << endl;
            cin >> ele;
            insert_atstart(ele);
            break;
        case 2:
            cout << "enter the element to insert at end" << endl;
            cin >> ele;
            insert_atend(ele);
            break;
        case 3:
            delete_atstart();
            break;
        case 4:
            delete_atend();
            break;
        case 5:
            display();
            break;
        case 6:
            system("cls");
        default:
            cout << "invalid input\nplease try again.." << endl;
            break;
        }
    } while (c != 0);
}