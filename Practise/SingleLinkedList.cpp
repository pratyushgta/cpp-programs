#include <iostream>
#include <cstring>
#include <sstream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

int create_counter = 0;
int space = 0;
struct node *head = NULL;

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
        }
        create_counter++;
    }
    space = create_counter;
    cout << "\nCreated a linked list of size " << create_counter << endl;
}

void in_begin(int value)
{
    if (space >= create_counter)
    {
        cout << "\nOVERFLOW!" << endl;
    }
    else
    {
        struct node *newnode = new node;
        newnode->data = value; //(*newnode).data=value;
        newnode->next = head;
        head = newnode;
        cout << value << " added to the list at the beginning!" << endl;
    }
}

void in_end(int value)
{
    if (space >= create_counter)
    {
        cout << "\nOVERFLOW!" << endl;
    }
    else
    {
        struct node *newnode = new node;
        newnode->data = value;
        newnode->next = NULL;
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
        }
        cout << value << " added to the list at the end!" << endl;
    }
}

void in_after(int value, int pos)
{
    if (space >= create_counter)
    {
        cout << "\nOVERFLOW!" << endl;
    }
    else
    {
        struct node *newnode = new node;
        struct node *ptr = head;
        struct node *preptr = head;
        int check = 0;

        while (preptr->data != pos)
        {
            preptr = ptr;
            ptr = ptr->next;
            if (ptr == NULL)
            {
                check = 1;
                break;
            }
        }
        if (check == 1)
        {
            cout << "Specified data does not exist!" << endl;
        }
        else
        {
            preptr->next = newnode;
            newnode->data = value;
            newnode->next = ptr;
        }
        cout << value << " added to the list after " << pos << endl;
    }
}

void in_before(int value, int pos)
{
    if (space >= create_counter)
    {
        cout << "\nOVERFLOW!" << endl;
    }
    else
    {
        struct node *newnode = new node;
        struct node *ptr = head;
        struct node *preptr = head;
        int check = 0;

        while (ptr->data != pos)
        {
            preptr = ptr;
            ptr = ptr->next;
            if (ptr == NULL)
            {
                check = 1;
                break;
            }
        }
        if (check == 1)
        {
            cout << "Specified node data does not exist!" << endl;
        }
        else
        {
            preptr->next = newnode;
            newnode->data = value;
            newnode->next = ptr;
        }
        cout << value << " added to the list before " << pos << endl;
    }
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
        free(temp);
        space--;
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
        space--;
        cout << "\nLast element deleted!" << endl;
    }
}

void del_value(int value)
{
    if (head->next == NULL)
    {
        cout << "\nUNDERFLOW!" << endl;
    }
    else
    {
        struct node *ptr = head;
        struct node *preptr = head;
        struct node *proptr = head;
        int check = 0;

        while (ptr->data != value)
        {
            preptr = ptr;
            ptr = ptr->next;
            if (ptr == NULL)
            {
                check = 1;
                break;
            }
            else
            {
                proptr = ptr->next;
            }
        }
        if (check == 1)
        {
            cout << "\nValue does not exist!" << endl;
        }
        else
        {
            preptr->next = proptr;
            free(ptr);
            space--;
            cout << "\nElement deleted!" << endl;
        }
    }
}

void del_after(int pos)
{
    if (head->next == NULL)
    {
        cout << "\nUNDERFLOW!" << endl;
    }
    else
    {
        struct node *newnode = new node;
        struct node *ptr = head;
        struct node *preptr = head;
        struct node *proptr = head;
        int check = 0;

        while (preptr->data != pos)
        {
            preptr = ptr;
            ptr = ptr->next;
            
            if (ptr == NULL)
            {
                check = 1;
                break;
            }
            else
            proptr = ptr->next;
        }
        if (check == 1)
        {
            cout << "\nSpecified node/ node after specified node does not exist!" << endl;
        }
        else
        {
            preptr->next = proptr;
            free(ptr);
            cout << "\nElement after " << pos << " deleted!" << endl;
        }
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
                cout << "\nWhere do you want to insert?\n1. Beginning\n2. End\n3. Before a node\n4. After a node\n5. Back" << endl;
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
                    cout << ">>>INSERT BEFORE<<<\nEnter a value to insert: " << endl;
                    cin >> in_val;
                    cout << "Insert before which value?" << endl;
                    cin >> pos;
                    in_before(in_val, pos);
                    break;
                case 4:
                    cout << ">>>INSERT AFTER<<<\nEnter a value to insert: " << endl;
                    cin >> in_val;
                    cout << "Insert after which value?" << endl;
                    cin >> pos;
                    in_after(in_val, pos);
                    break;
                case 5:
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
                cout << "\nWhere do you want to delete from?\n1. Beginning\n2. End\n3. A value\n4. After a node\n5. Back" << endl;
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
                    cout << ">>>DELETE VALUE<<<\nEnter a value to delete: " << endl;
                    cin >> in_val;
                    del_value(in_val);
                    break;
                case 4:
                    cout << ">>>DELETE AFTER<<<\nDelete after which value?" << endl;
                    cin >> pos;
                    del_after(pos);
                    break;
                case 5:
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
