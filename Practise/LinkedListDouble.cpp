#include <iostream>
#include <cstring>
#include <sstream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;
int create_counter = 0;

void create()
{
    string v = "";
    cout << "\nEnter a value or enter `e` to exit" << endl;
    while (v != "e")
    {
        struct node *newnode = new node;
        cout << "Enter a value to insert: " << endl;
        cin >> v;
        if (v == "e")
            break;
        stringstream value(v);
        int x = 0;
        value >> x;
        newnode->data = x;
        newnode->next = NULL;
        newnode->prev = NULL;
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            struct node *ptr = head;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = newnode;
            newnode->prev = ptr;
        }
        create_counter++;
    }
    cout << "\nCreated a linked list of size " << create_counter << endl;
}

void in_begin(int val)
{
    struct node *newnode = new node;
    newnode->next = NULL;
    newnode->prev = NULL;
    newnode->data = val;

    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

void in_end(int val)
{
    struct node *newnode = new node;
    struct node *ptr = head;
    newnode->next = NULL;
    newnode->prev = NULL;
    newnode->data = val;

    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }

    ptr->next = newnode;
    newnode->prev = ptr;
}

void del_begin()
{
    if (head->next == NULL)
    {
        cout << "\nUNDERFLOW!" << endl;
    }
    else
    {
        struct node *temp = head;
        head = head->next;
        head->prev = NULL;
        delete (temp);
        cout << "\nFirst element deleted!" << endl;
    }
}

void del_end()
{
    if (head->next == NULL)
    {
        cout << "\nUNDERFLOW!" << endl;
    }
    else
    {
        struct node *ptr = head;
        struct node *preptr = head;

        while (ptr->next != NULL)
        {
            preptr = ptr;
            ptr = ptr->next;
        }
        preptr->next = NULL;
        free(ptr);
        cout << "\nLast element deleted!" << endl;
    }
}

void display()
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }

    cout << "\n";
}

void rev_display()
{
    struct node *ptr = head;
    
    while (ptr->next!= NULL)
    {
        ptr = ptr->next;
    }
    while (ptr!= NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->prev;
    }
    cout << "\n";
}

int main()
{
    int choice = 0;
    int in_val = 0;
    int choice2 = 0;
    int pos = 0;
    do
    {
        cout << "\nLINKED LISTS OPERATIONS\n1. Create\n2. Insert\n3. Delete\n4. Display\n5. Exit" << endl;
        cout << "Enter: " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            if (create_counter == 0)
            {
                create();
            }
            else
            {
                cout << "\nLinked List is already created!" << endl;
            }
            break;

        case 2:
            if (create_counter == 0)
            {
                cout << "\nYou need to create a linked list first!" << endl;
                break;
            }
            else
            {
                cout << "\nWhere do you want to insert?\n1. Beginning\n2. End\n3. Back" << endl;
                cin >> choice2;
                switch (choice2)
                {
                case 1:
                    cout << ">>>INSERT BEGINNING<<<\nEnter a value to insert: " << endl;
                    cin >> in_val;
                    in_begin(in_val);
                    break;
                case 2:
                    cout << ">>>INSERT END<<<\nEnter a value to insert: " << endl;
                    cin >> in_val;
                    in_end(in_val);
                    break;
                case 3:
                    break;
                default:
                    cout << "\nInvalid Input" << endl;
                }
            }
            break;

        case 3:
            if (create_counter == 0)
            {
                cout << "\nYou need to create a linked list first!" << endl;
                break;
            }
            else
            {
                cout << "\nWhere do you want to delete from?\n1. Beginning\n2. End\n3. Back" << endl;
                cin >> choice2;
                switch (choice2)
                {
                case 1:
                    del_begin();
                    break;
                case 2:
                    del_end();
                    break;
                case 3:
                    break;
                default:
                    cout << "\nInvalid Input" << endl;
                }
            }
            break;

        case 4:
            if (create_counter == 0)
            {
                cout << "\nList is empty. You need to create a linked list first!" << endl;
                break;
            }
            else
            {
                cout << "\nHow do ou want to display?\n1. Normal Display\n2. Reverse Display\n3. Back" << endl;
                cin >> choice2;
                switch (choice2)
                {
                case 1:
                    cout << endl;
                    for (int i = 0; i < create_counter * 3; i++)
                    {
                        cout << "-";
                    }
                    cout << endl;
                    cout << "LINKED LIST" << endl;
                    display();
                    for (int i = 0; i < create_counter * 3; i++)
                    {
                        cout << "-";
                    }
                    cout << endl;

                    break;
                case 2:
                    cout << endl;
                    for (int i = 0; i < create_counter * 3; i++)
                    {
                        cout << "-";
                    }
                    cout << endl;
                    cout << "LINKED LIST" << endl;
                    rev_display();
                    for (int i = 0; i < create_counter * 3; i++)
                    {
                        cout << "-";
                    }
                    cout << endl;

                    break;
                case 3:
                    break;
                default:
                    cout << "\nInvalid Input" << endl;
                }
            }
            break;

        case 5:
            cout << "Goodbye!" << endl;
            break;

        default:
            cout << "\nInvalid Input" << endl;
            break;
        }
    } while (choice < 5);
}