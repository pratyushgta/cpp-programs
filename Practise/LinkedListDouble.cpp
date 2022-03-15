#include <iostream>
#include <cstring>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;

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
    struct node *ptr = head;
    struct node *temp = head;
    ptr = ptr->next;
    ptr->prev = NULL;
    head=ptr;
    free(temp);
}

void del_end()
{
}
