#include <iostream>
#include <cstring>
using namespace std;

int queue[5];
int size = 5;
int front = -1;
int rear = -1;

void insert(int n) // aka enqueue
{
    if (rear >= size - 1)
    {
        cout << "OVERFLOW!" << endl;
    }
    else if (front == -1)
    {
        front = 0;
        queue[++rear] = n;
        cout << "Value Inserted!" << endl;
    }
    else
    {
        queue[++rear] = n;
        cout << "Value Inserted!" << endl;
    }
}

void remove() // aka dequeue
{
    if (front == -1 && rear == -1 || front > rear)
    {
        cout << "UNDERFLOW!" << endl;
    }
    else if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        cout << queue[front] << " deleted!" << endl;
        front++;
    }
}

void display()
{
    if (front == -1)
        cout << "Queue is Empty!" << endl;
    else
    {
        for (int i = front; i <= rear; i++)
        {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int choice = 0;
    int push_val = 0;

    do
    {
        cout << "\nQUEUE OPERATIONS\n1. Insert\n2. Delete\n3. Display\n4. Exit" << endl;
        cout << "Enter: " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter a number to insert: " << endl;
            cin >> push_val;
            insert(push_val);
            break;

        case 2:
            remove();
            break;

        case 3:
            display();
            break;

        case 4:
            cout << "Goodbye!" << endl;
            break;

        default:
            cout << "Invalid Input" << endl;
            main();
            break;
        }
    } while (choice < 4);
}
