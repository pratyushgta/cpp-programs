#include <iostream>
#include <cmath>
using namespace std;

struct tree
{
    int data;
    struct tree *left;
    struct tree *right;
};

struct tree *root = NULL;[]

void create()
{
}

struct tree *insert(struct tree *r, int val)
{
    struct tree *newnode = new tree;
    newnode->data = val;
    newnode->left = NULL;
    newnode->right = NULL;
    if (r == NULL)
    {
        // newnode->data = val;
        r = newnode;
    }
    else if (val < r->data)
    {
        r->left = insert(r->left, val);
    }
    else
    {
        r->right = insert(r->right, val);
    }
    return r;
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

void postorder(struct tree *r)
{
    if (r != NULL)
    {
        inorder(r->left);
        inorder(r->right);
        cout << r->data << " ";
    }
}

void preorder(struct tree *r)
{
    if (r != NULL)
    {
        cout << r->data << " ";
        inorder(r->left);
        inorder(r->right);
    }
}

void search(struct tree *r, int val)
{
    if (r != NULL)
    {
        if (r->data == val)
        {
            cout << "Element found in the Binary Tree!" << endl;
        }
        else if (val < r->data)
        {
            return search(r->left, val);
        }
        else
        {
            return search(r->right, val);
        }
    }
    else
    {
        cout << "Element not found in the tree!" << endl;
    }
}

int main()
{
    int choice = 0;
    int choice2 = 0;
    int create_counter = 0;
    int in_val = 0;
    do
    {
        cout << "\nBST OPERATIONS\n1. Insert\n2. Display\n3. Search\n4. Exit" << endl;
        cout << "Enter: " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter a value to insert: " << endl;
            cin >> in_val;
            root = insert(root, in_val);
            break;

        case 2:
            cout << "\nHow do you want to display?\n1. Preorder\n2. Inorder\n3. Postorder\n4. Back" << endl;
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
                cout << "PREORDER DISPLAY" << endl;
                preorder(root);
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
                cout << "INORDER DISPLAY" << endl;
                inorder(root);
                for (int i = 0; i < create_counter * 3; i++)
                {
                    cout << "-";
                }
                cout << endl;

                break;
            case 3:
                cout << endl;
                for (int i = 0; i < create_counter * 3; i++)
                {
                    cout << "-";
                }
                cout << endl;
                cout << "POSTORDER DISPLAY" << endl;
                postorder(root);
                for (int i = 0; i < create_counter * 3; i++)
                {
                    cout << "-";
                }
                cout << endl;

                break;
            case 4:
                break;
            default:
                cout << "\nInvalid Input" << endl;
            }
            break;

        case 3:
            cout << "Enter a value to search: " << endl;
            cin >> in_val;
            search(root, in_val);
            break;
        case 4:
            cout << "Goodbye!" << endl;
            break;

        default:
            cout << "\nInvalid Input" << endl;
            break;
        }
    } while (choice < 4);
}