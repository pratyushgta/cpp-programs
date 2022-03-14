#include <iostream>
using namespace std;

int stack[100];
int size = 100;
int top = -1;

void push(int n)
{
    if (top > size - 1)
        cout << "OVERFLOW!" << endl;
    else
    {
        stack[++top] = n;
    }
}

int pop()
{
    int returnVal = 0;
    if (top <= -1)
        cout << "UNDERFLOW!" << endl;
    else
    {
        returnVal = stack[top];
        top--;
    }
    return returnVal;
}

void display()
{
    if (top >= 0)
    {
        cout << "Postfix Evaluation: ";
        for (int i = top; i >= 0; i--)
        {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "Stack is empty";
    }
}

int main()
{
    string expression = ""; // variable to store input expression
    cout << "Enter a Postfix expression to evaluate: " << endl;
    cin >> expression; // input the postfix expression

    for (int i = 0; i < expression.length(); i++) // to traverse through the expression, element by element
    {
        char ch = expression.at(i); // to extract the element at i, in the expression
        if (ch >= '0' && ch <= '9') // if the extracted element is a digit, then push it into the stack
        {
            push(expression.at(i) - '0'); // since the extracted element is in the character form, but the stack only takes in integer element, so we convert character to integer by using (character value - '0') which basically subtracts the ascii value of the character number with the ascii value of 0...to give the digit value
        }
        else // if the extracted character is not a digit, then we pop 2 elements from the stack
        {
            int val_1 = pop(); // stores the 1st popped out element from the stack
            int val_2 = pop(); // stores the 2nd popped out element from the stack

            int result = 0;

            if (ch == '+') // if the extracted character is + , then add the two popped out elements and push their result back into the stack
            {
                result = val_2 + val_1;
                push(result);
            }
            else if (ch == '-') // if the extracted character is - , then subtract the two popped out elements and push their result back into the stack
            {
                result = val_2 - val_1;
                push(result);
            }
            else if (ch == '*') // if the extracted character is * , then multiply the two popped out elements and push their result back into the stack
            {
                result = val_2 * val_1;
                push(result);
            }
            else if (ch == '/') // if the extracted character is / , then divide the two popped out elements and push their result back into the stack
            {
                result = val_2 / val_1;
                push(result);
            }
        }
    }
    display(); //to display the stack after evaluation 
}