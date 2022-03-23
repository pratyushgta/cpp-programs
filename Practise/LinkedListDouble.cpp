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
int create_counter = 0; // to store the size of the list created

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
        stringstream value(v); // converting string input to integer
        int x = 0;
        value >> x;
        newnode->data = x;
        newnode->next = NULL;
        newnode->prev = NULL;
        if (head == NULL) // if it is the first node in the list
        {
            head = newnode;
        }
        else // performing insertions in end
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

void in_begin(int val) // to insert an element in the beginning of the list
{
    struct node *newnode = new node; // allocating memory for a node: newnode
    newnode->next = NULL;            // initializing the node's next and previous addresses to NULL
    newnode->prev = NULL;
    newnode->data = val; // assigning a value to the node's data field

    newnode->next = head; // assigning address of head to the address pointer of newnode, in order to create a link
    head->prev = newnode; // assigning the address of newnode to the previous address pointer of the current head, in order to create a reverse link
    head = newnode;       // // making the newnode head since it is now the first node
    cout << val << " added to the list at the beginning!" << endl;
}

void in_end(int val) // to insert an element at the end of the list
{
    struct node *newnode = new node;
    struct node *ptr = head;
    newnode->next = NULL;
    newnode->prev = NULL;
    newnode->data = val;

    while (ptr->next != NULL) // to traverse until the last node
    {
        ptr = ptr->next;
    }

    ptr->next = newnode;
    newnode->prev = ptr;
    cout << val << " added to the list at the end!" << endl;
}

void del_begin() // to delete the first node of the list
{
    if (head->next == NULL) // if no node exists, no deletions can take place, therefore, the underflow condition
    {
        cout << "\nUNDERFLOW!" << endl;
    }
    else
    {
        struct node *temp = head; // temporary variable to store the first node which is to be deleted
        head = head->next;        // shifting the head to second node in the list
        head->prev = NULL;        // since second node will now become the first node (head) of the list, therefore, it's previous address will point to NULL
        delete (temp);            // deleting the first node
        cout << "\nFirst element deleted!" << endl;
    }
}

void del_end() // to delete the last node of the list
{
    if (head->next == NULL)
    {
        cout << "\nUNDERFLOW!" << endl;
    }
    else
    {
        struct node *ptr = head;    // pointer variable to traverse until the last node of the list
        struct node *preptr = head; // pointer variable to traverse until the second last node of the list

        while (ptr->next != NULL)
        {
            preptr = ptr;
            ptr = ptr->next;
        }
        preptr->next = NULL; // since last node is to be deleted, the second last node now points to NULL
        free(ptr);           // deleting the last node
        cout << "\nLast element deleted!" << endl;
    }
}

void display() // to display the data of each node in the linked list
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " "; // printing data of each node as the pointer traverses until the last node
        ptr = ptr->next;
    }

    cout << "\n";
}

void rev_display() // to display the data of each node in the linked list, in reverse
{
    struct node *ptr = head; // pointer variable which will traverse and point to the last node of the list

    while (ptr->next != NULL) // pointer traversing to the last node
    {
        ptr = ptr->next;
    }
    while (ptr != NULL) // now the pointer is pointing to the last node. From here, the pointer will keep printing the data elements as it traverses backwards
    {
        cout << ptr->data << " ";
        ptr = ptr->prev;
    }
    cout << "\n";
}

int main()
{
    int choice = 0;  // to store the user input of outer switch cases
    int in_val = 0;  // to store the value which is to be inserted
    int choice2 = 0; // to store the user input of inner (nested) switch cases

    do
    {
        cout << "\nDOUBLY LINKED LIST OPERATIONS\n1. Create\n2. Insert\n3. Delete\n4. Display\n5. Exit" << endl;
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
                cout << "\nHow do you want to display?\n1. Display Normally\n2. Reverse Display\n3. Back" << endl;
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