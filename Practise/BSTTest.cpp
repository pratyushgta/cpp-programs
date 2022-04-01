#include <iostream>
using namespace std;

struct node
{
    int id;
    struct node *left;
    struct node *right;
};

struct node *root = NULL;

void insert(struct node *r, int val)
{
    // cout<<"an";
    struct node *newnode = new node;
    newnode->id = val;
    newnode->left = NULL;
    newnode->right = NULL;

    if (r == NULL)
    {
        r=newnode;
        root=r;
    }
    else if (val < r->id)
    {
        insert(r->left, val);
    }

    else
    {
        insert(r->right, val);
    }
}

void search(struct node *root, int val)
{
    if (root == NULL)
    {
        cout << "data base is empty" << endl;
        return;
    }
    else if (val == root->id)
        cout << "Element is present in data base" << endl;

    else if (val < root->id)
        search(root->left, val);

    else
        search(root->right, val);
}

void preorder(struct node *root)
{
    if (root != NULL)
    {
        cout << root->id;
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->id;
        inorder(root->right);
    }
}

void postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->id;
    }
}

int main()

{
    int option, val;

    do
    {

        cout << "\n1) Insert new id" << endl;
        cout << "2) search customer id" << endl;
        cout << "3) display in preorder" << endl;
        cout << "4) display in inorder" << endl;
        cout << "5) display in postorder" << endl;
        cout << "6) DONE" << endl;
        cin >> option;

        switch (option)
        {
        case 1:
            cout << "Enter id " << endl;
            cin >> val;
            insert(root, val);
            break;

        case 2:
            cout << "Enter the id you want to search " << endl;
            cin >> val;
            search(root, val);
            break;

        case 3:
            preorder(root);
            break;

        case 4:
            inorder(root);
            break;

        case 5:
            postorder(root);
            break;

        case 6:
            break;
        }
    } while (option != 6);
}