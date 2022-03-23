#include <iostream>
#include <cmath>
using namespace std;

struct tree
{
    int data;
    struct tree *left;
    struct tree *right;
};

struct tree *root = NULL;

void create()
{
}

void insert(struct tree *r, int val)
{
    struct tree *newnode = new tree;
    newnode->left = NULL;
    newnode->right = NULL;
    if (r == NULL)
    {
        newnode->data = val;
        root = newnode;
    }
    else if (val < r->data)
    {
        insert(r->left, val);
    }
    else
    {
        insert(r->right, val);
    }
}

void inorder(struct tree *r)
{
    if (r != NULL)
    {
        inorder(r->left);
        cout << r->data << " ";
        inorder(r->right);
    }
}

int main()
{
    int choice = 0;
    int create_counter = 0;
    int in_val = 0;
    do
    {
        cout << "\nBST OPERATIONS\n1. Insert\n2. Display\n3. Exit" << endl;
        cout << "Enter: " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter a value to insert: " << endl;
            cin >> in_val;
            insert(root, in_val);
            break;

        case 2:
        cout << "DISPLAY" << endl;
        inorder(root);
        break;

         case 3:
            cout << "Goodbye!" << endl;
            break;

        default:
            cout << "\nInvalid Input" << endl;
            break;
        }
    } while (choice != 2);
}